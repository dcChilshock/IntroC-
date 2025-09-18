/*he BMI value is defined as

 Programming Tasks
Create a BMI calculator application that:
(1) Get the input for the customer’s name, weight (in pounds) and height (in the format of x feet y inches) in inches that calculate the customer’s body mass index (please use the sample code PhysicalCheck.cpp as the basic code).
(2) Calculate the BMI value.
(3) Judge one’s health status based on the BMI value and the standard provided by the Department of Health and Human Services :
Underweight:  Less than 18.5
Normal:          Greater or equal to 18.5 but less than 25
Overweight:    25 and above
(4) Print one’s basic physical check information (name, weigh, height), BMI value, and health status. Make sure each piece information is printed in a separate line (height information should be just line in the format like 5’9’’).
    Write a program to compare the populations of two states.
(1) Ask the user to input the name (use getline(cin, name) to allow input with spaces) and population  (must be the integer type) the first state.
(2) Ask the user to input the name (use getline(cin, name) to allow input with spaces) and population  (must be the integer type) the second state.
(3) Find out which state has less population, and compute the ratio of that state’s population compared to the other one. Convert the ratio value into percentage value (multiplying 100).
(4) Print out the comparison results: The population of State XXX is XXX percent of State XXX.
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
	std::string n;
	int weight = 0;
	int x = 0;
	int y = 0;
	cout<<"What is your Name Customer?";
	getline(cin,n);
	cout<<"What is your weight? ( in pounds ):";
	cin>>weight; //weight
	cout<<"What is your height in feet? ( in x feet y inches format )";
	cin>>x; //feet 
	cout<<"What is your height in inches?";
	cin>>y;
	//calc the BMI  value
	//w * 703 = top 
	//y * y = bottom 
	double bmi = (weight*703) / (y*y);
	
	if (bmi < 18.5){
		cout<<"underweight";
	} else if (bmi >= 18.5){
		cout<<"normal";
	} else{
		cout<<"overweight";
	}
	return 0;
}

