/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 10th July, 2021
 * title: Cramer Rule for Simultaneous Equation
 * description: a program that computes value x, y and z in a 3-variable simultaneous equation using Cramer Rule to determine the determinants.
 */

#include <iostream>
using namespace std;

class MatrixRow
{
private:
    int Entry1, Entry2, Entry3;

public:
    MatrixRow(void) {}
    MatrixRow(int e1, int e2, int e3)
    {
        Entry1 = e1;
        Entry2 = e2;
        Entry3 = e3;
    }

    int getEntry1(void)
    {
        return Entry1;
    }

    int getEntry2(void)
    {
        return Entry2;
    }

    int getEntry3(void)
    {
        return Entry3;
    }
};

class Matrix3by3
{
private:
    MatrixRow row1, row2, row3;

public:
    Matrix3by3(void) {}
    Matrix3by3(MatrixRow r1, MatrixRow r2, MatrixRow r3)
    {
        row1 = r1;
        row2 = r2;
        row3 = r3;
    }

    MatrixRow getRow1(void)
    {
        return row1;
    }

    MatrixRow getRow2(void)
    {
        return row2;
    }

    MatrixRow getRow3(void)
    {
        return row3;
    }

    int det(void)
    {
        int a = row1.getEntry1();
        a *= ((row2.getEntry2() * row3.getEntry3()) - (row2.getEntry3() * row3.getEntry2()));

        int b = row1.getEntry2();
        b *= ((row2.getEntry1() * row3.getEntry3()) - (row3.getEntry1() * row2.getEntry3()));

        int c = row1.getEntry3();
        c *= ((row2.getEntry1() * row3.getEntry2()) - (row2.getEntry2() * row3.getEntry1()));

        return (a - b + c);
    }

    void print(void)
    {
        cout << row1.getEntry1() << " " << row1.getEntry2() << " " << row1.getEntry3() << endl;
        cout << row2.getEntry1() << " " << row2.getEntry2() << " " << row2.getEntry3() << endl;
        cout << row3.getEntry1() << " " << row3.getEntry2() << " " << row3.getEntry3() << endl
             << endl;
    }
};

class MatrixCramerRule
{
private:
    Matrix3by3 M, Mx, My, Mz;
    int R[3];

public:
    MatrixCramerRule() {}
    MatrixCramerRule(Matrix3by3 m, int r[3])
    {
        M = m;
        R[0] = r[0];
        R[1] = r[1];
        R[2] = r[2];

        Mx = Matrix3by3(
            MatrixRow(r[0], m.getRow1().getEntry2(), m.getRow1().getEntry3()),
            MatrixRow(r[1], m.getRow2().getEntry2(), m.getRow2().getEntry3()),
            MatrixRow(r[2], m.getRow3().getEntry2(), m.getRow3().getEntry3()));

        My = Matrix3by3(
            MatrixRow(m.getRow1().getEntry1(), r[0], m.getRow1().getEntry3()),
            MatrixRow(m.getRow2().getEntry1(), r[1], m.getRow2().getEntry3()),
            MatrixRow(m.getRow3().getEntry1(), r[2], m.getRow3().getEntry3()));

        Mz = Matrix3by3(
            MatrixRow(m.getRow1().getEntry1(), m.getRow1().getEntry2(), r[0]),
            MatrixRow(m.getRow2().getEntry1(), m.getRow2().getEntry2(), r[1]),
            MatrixRow(m.getRow3().getEntry1(), m.getRow3().getEntry2(), r[2]));
    }

    Matrix3by3 getM(void)
    {
        return M;
    }

    Matrix3by3 getMx(void)
    {
        return Mx;
    }

    Matrix3by3 getMy(void)
    {
        return My;
    }

    Matrix3by3 getMz(void)
    {
        return Mz;
    }
};

int main()
{
    /* Consider the simultaneous equation below
        1x + 2y + 3z = 9 --- (1)
        2x - 1y + 1z = 8 --- (2)
        3x + 0y - 1z = 3 --- (3) 
    */

    MatrixRow row1 = MatrixRow(1, 2, 3);
    MatrixRow row2 = MatrixRow(2, -1, 1);
    MatrixRow row3 = MatrixRow(3, 0, -1);

    int R[] = {9, 8, 3};

    Matrix3by3 M = Matrix3by3(row1, row2, row3);

    MatrixCramerRule mcr = MatrixCramerRule(M, R);

    mcr.getM().print();
    mcr.getMy().print();
    mcr.getMx().print();
    mcr.getMz().print();

    cout << "det(M)  = " << mcr.getM().det() << endl;
    cout << "det(MX) = " << mcr.getMx().det() << endl;
    cout << "det(MY) = " << mcr.getMy().det() << endl;
    cout << "det(MZ) = " << mcr.getMz().det() << endl;

    cout << endl;
    cout << "X = " << (mcr.getMx().det() / mcr.getM().det()) << endl;
    cout << "Y = " << (mcr.getMy().det() / mcr.getM().det()) << endl;
    cout << "Z = " << (mcr.getMz().det() / mcr.getM().det()) << endl;

    return 0;
}
