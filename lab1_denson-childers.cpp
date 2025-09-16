/*Author: Nolan Denson Childers 
 *Prefered Name: Puck
 *Date:9/4/2025
 * 
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string plate = "";
	int speed = 0;
	int spdlimit = 40;
	cout<<"What is the vehicle liscence plate:";
	cin>>plate;
	cout<<"What was the speed of the vehicle:";
	cin>>speed;
	
	cout<<"\nPlate: "<<plate;
	cout<<"\nSpeed: "<<speed<<" mph";
	cout<<"\nSpeed limit:"<<spdlimit<<" mph";
	return 0;
}

