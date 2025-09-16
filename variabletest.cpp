/* Variabletest.cpp
 * Author: Nolan Denson Childers 
 * Prefered name: Puck
 * Date: 9/4/2025
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int age;
	age = 10;
	cout<<"\n Your age is: "<< age;
	
	//assign a different value to the variable age
	age = 23;
	cout<<"\n Your age is: "<< age;
	
	long longVar = 1;
	cout<<"\n size of long in linux:"<<sizeof(longVar);
	
	bool yesno = false;
	cout<<"\n Letter Number is:"<<yesno;
	
	char letter = 'A';
	int letternumber = letter;
	cout<<"\n Letter number is:"<<letternumber;
	
	bool threePeat3 = true;
	return 0;
}

