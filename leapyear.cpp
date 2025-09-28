/*Author: Nolan Denson Childers
 *Preferred Name: Puck
 *Date: 9/26/2025
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
	int year=0;
	int div4=0;
	int div100=0;
	cout<<"What year is it? ";
	cin>>year;
	int mod4=year%4;
	int mod100=year%100;
	if (mod4==0){
		div4=1; //1=can divide by said number
	}else{
		div4=0; //0=not divide by said number
	}
	if(mod100==0){
		div100=1;
	}else{
		div100=0;
	}
	if(div4==1 and div100==0){
		cout<<"The inserted year is a leap year";
	}else{
		cout<<"The inserted year is not a leap year";
	}
	return 0;
}

