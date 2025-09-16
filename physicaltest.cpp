


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	//ask user input name age height and weight information
	//(1) declare variables
	string name = "";
	int age = 0;
	int weight = 0;
	//(2) ask user to input the right information for the variables
	cout<<"\n Input the name:";
	cin>>name;
	cout<<"\n age:";
	cin>>age;
	cout<<"\n Weight:";
	cin>>weight;
	//print out the information in a nice format
	cout<<"=========================================";
	cout<<"\n Your Basic physical check information:";
	cout<<"\n Name:"<<name;
	cout<<"\n Age:"<<age;
	cout<<"\n Weight:"<<weight<<" lbs";
	cout<<"=========================================";
	return 0;
}

