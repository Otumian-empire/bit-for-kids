/**
 * author: popecan1000@gmail.com
 * auth_repo: http://github.com/otumian-empire
 * date: 7th July, 2021
 * title: calories expenditure
 * description: a program that computes the calories burnt in a work
 * info_source: https://web.archive.org/web/20120422154143/http:/fitnowtraining.com/2012/01/formula-for-calories-burned/
 * 
 */

#include <iostream>

using namespace std;

int main()
{
	// Constants for Male subject
	const char MALE = 'M';
	const float MALE_AGE_FACTOR = 0.2017;
	const float MALE_WEIGHT_FACTOR = 0.09036;
	const float MALE_HEART_RATE_FACTOR = 0.6309;
	const float MALE_CALORIES_FACTOR = 55.0969;

	// Constants for Female subject
	const char FEMALE = 'F';
	const float FEMALE_AGE_FACTOR = 0.074;
	const float FEMALE_WEIGHT_FACTOR = 0.05741;
	const float FEMALE_HEART_RATE_FACTOR = 0.4472;
	const float FEMALE_CALORIES_FACTOR = 20.40220;

	// Shared constant between male and female subject
	const float TIME_FACTOR = 4.184;

	// Input variables
	char gender = '\0';
	int age = 0;
	float time = 0;
	float heart_rate = 0.0;
	float weight = 0.0;

	// Calories-computing variables
	float age_factor = 0.0;
	float weight_factor = 0.0;
	float heart_rate_factor = 0.0;
	float calories_factor = 0.0;

	// Output variable
	float calories = 0.0;

	// get user gender as M for Male and F for Female
	cout << "What is your gender, Male (M) or Female (F): ";
	cin >> gender;

	// get user age
	cout << "How old are you: ";
	cin >> age;

	// get user weight in kg
	cout << "How much do you weigh: ";
	cin >> weight;

	// get user heart rate
	cout << "What is your heart rate: ";
	cin >> heart_rate;

	// get time for the workout - in minutes
	cout << "How long did you exercise for: ";
	cin >> time;

	// check gender of subject and assign the computing variables
	// the appropriate required constants
	if (gender == MALE)
	{
		age_factor = MALE_AGE_FACTOR;
		weight_factor = MALE_WEIGHT_FACTOR;
		heart_rate_factor = MALE_HEART_RATE_FACTOR;
		calories_factor = MALE_CALORIES_FACTOR;
	}
	else if (gender == FEMALE)
	{
		age_factor = FEMALE_AGE_FACTOR;
		weight_factor = FEMALE_WEIGHT_FACTOR;
		heart_rate_factor = FEMALE_HEART_RATE_FACTOR;
		calories_factor = FEMALE_CALORIES_FACTOR;
	}

	// there is no need for an else-block since a default value for calories is set.
	// calories was initialized to 0.0 - so 0 calories would be printed when gender
	// is not choosen or the value of gender is neither M or F

	// Compute the calories burnt in the exercise
	calories = (age * age_factor);
	calories -= (weight * weight_factor);
	calories += (heart_rate * heart_rate_factor);
	calories -= calories_factor;
	calories *= (time / TIME_FACTOR);

	// Output the calories burnt
	cout << calories << " calories burnt." << endl;

	return 0;
}
