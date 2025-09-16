/*
 * Author:Nolan Denson Childers
 * Preferred name: Puck
 * Date: September 11th 2025
 * 
 * Details: John works at a 8 dollars an hour rate
 * if he works more than 8 hours a day he gets overtime salary for 10$
 * workTime is his hours a day
 */


#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int basic_rate = 7;
	const int overtime_rate = 10;
	int workTime=0;
	
	cout<<"what was the total time worked by John?";
	cin>>workTime;
	
	if(workTime > 8){
		double workover = workTime - 8
		double ratePay = 10;
		double workPay = (workTime*overtime_rate) + (workover*basic_rate);
		to_string(workPay)
		cout<<"The total amount of money John made by working today: "<<workPay;
	}
	else
	{
		int ratePay = 8;
		int workPay = workTime * ratePay;
		to_string(workPay)
		cout<<"The total amount of money John made by working today: "<<workPay;
	}
	
	return 0;
}

