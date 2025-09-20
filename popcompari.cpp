/*
 * Author: Nolan Denson - Childers
 * Preferred Name: Puck
 * Date: 9/18/2025
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
	// string variables
	std::string name1;
	std::string name2;
	
	double statepop1 = 0;
	double statepop2 = 0;
	
	cout<<"Input the name of state 1: ";
	getline(cin,name1); //name of state one
	cout<<"\nInput the name of state 2: ";
	getline(cin,name2); //name of state two
	cout<<"\nThe population of "<<name1<<": ";
	cin>>statepop1;
	cout<<"\nInput the population of "<<name2<<": ";
	cin>>statepop2;
	
	if (statepop1 >= statepop2){ //compare populations to see what should get divided first.
		double ratio = statepop2/statepop1; // this method to see what should get divided first is more complicated than it needs to be.
		double percentratio = ratio * 100;
		cout<<"\nThe Population of "<<name1<<" is "<<percentratio<<" percent of "<<name2; // print final result
	} else if (statepop1<statepop2){
		double ratio = statepop1/statepop2;
		double percentratio = ratio * 100;
		cout<<"\nThe Population of "<<name2<<" is "<<percentratio<<" percent of "<<name1;
	}
	return 0;
}

