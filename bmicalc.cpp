/* Author: Nolan Denson Childers 
 * Preferred Name: Puck 
 * Date: 9/18/2025
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
	std::string n;
	std::string word;
	int weight = 0;
	int x = 0;
	int y = 0;
	cout<<"What is your Name Customer? ";
	getline(cin,n);
	cout<<"What is your weight? ( in pounds ): ";
	cin>>weight; //weight
	cout<<"What is your height feet? ( in x feet y inches format ) ";
	cin>>x; //feet 
	cout<<"What is your height inches? ";
	cin>>y;
	//calc the BMI  value
	//w * 703 = top 
	//y * y = bottom 
	double height = (x * 12) + y;
	double bmi = (weight*703) / (height*height);
	
	if (bmi < 18.5){
		word = "underweight";
	} else if (bmi >= 18.5){
		word = "normal";
	} else{
		word = "overweight";
	}
	cout<<"Patient name is: "<<n;
	cout<<"\nPatient weight is: "<<weight;
	cout<<"\nPatient height is: "<<x<<"'"<<y;
	cout<<"\nPatient is: "<<word;
	return 0;
}

