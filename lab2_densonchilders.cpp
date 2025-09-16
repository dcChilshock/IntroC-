
// Author: Nolan Denson Childers
// Date: 9/11/2025
// Program: lab2 electricity bill
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(int argc, char **argv)
{
	const double tax = 0.05; 
	// base charge
	const double late = 0.04; 
	// total charge
	
	int kwhUsed = 0;
	std::string name;
	std::string month;
	
	cout<<"Enter the customer name: ";
	getline(cin,name);
	cout<<"Enter the month of the bill: ";
	cin>>month;
	
	cout<<"Enter the KWH used: ";
	cin>>kwhUsed;
	
	double surCharge = 0;
	
	if(kwhUsed<1000){
		surCharge = 0.15;
	}
	else{
		surCharge = 0.20;
	}
		
	double baseCharge = kwhUsed*0.1528;
	double baseTax = baseCharge * tax;
	double surpay = baseCharge * surCharge;
	double total = baseCharge+surpay+baseTax;
	double latepay = (total*late) + total;
	
	cout<<"\nElectric Bill for "<<name<<" on the 6th of "<<month<<":";
	cout<<std::fixed<<std::setprecision(2)<<"\nKilowatts used: "<<kwhUsed;
	cout<<std::fixed<<std::setprecision(2)<<"\nBase Charge: "<<baseCharge;
	cout<<std::fixed<<std::setprecision(2)<<"\nSurCharge: "<<surpay;
	cout<<std::fixed<<std::setprecision(2)<<"\nCity Tax: "<<baseTax;
	cout<<std::fixed<<std::setprecision(2)<<"\nPay this amount: "<<total;
	cout<<std::fixed<<std::setprecision(2)<<"\nIf late pay this amount: "<<latepay;
	
	return 0;
}

