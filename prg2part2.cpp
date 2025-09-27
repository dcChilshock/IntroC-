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
	int gt = 0;
	double tg = 0.0;
	double g87 = 2.99;
	double g89 = 3.19;
	double g91 = 3.59;
	double dis = 0.0;
	double gc = 0.0; //price for the gas
	std::string mem,pt;// membership, payment typegas type and total gallons
	cout<<"Are you a member? "; //if a member get 0.20 off for each gallon
	cin>>mem;
	cout<<"Payment type?(cash or card) "; // if payed by cash gets a 0.10 off for each gallon
	cin>>pt;
	cout<<"Gas type?(87 89 0r 91) ";
	cin>>gt;
	cout<<"Total Gallons inputed: ";
	cin>>tg;
	if(mem=="no"){
		dis=dis+0.0; 
	}else if(mem=="yes"){
		dis=dis+0.20;
	}
	if(pt=="cash"){
		dis=dis+0.10;
	}else if(pt=="card"){
		dis=dis+0;
	}
	if(gt==87){
		gc = g87;
	}else if(gt==89){
		gc = g89;
	}else if(gt==91){
		gc = g91;
	}
	double dt=dis*tg; //discount total
	double price =(gc * tg)-dt; // price
	double totprice = price *1.059;
	cout<<"Member: "<<mem;
	cout<<"\nPayment type: "<<pt;
	cout<<"\nGas type: #"<<gt;
	cout<<"\nUnit Price: "<<gc;
	cout<<"\nTotal Gallons: "<<tg;
	cout<<"\nTotal Price: "<<price;
	cout<<"\nTotal Charge: "<<totprice;
	cout<<"\nDiscount Total: "<<dt;
	return 0;
}

