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
	std::string dis;
	int ib = 0;
	int cost = 0;
	cout<<"Volume amount of ice bags? ";
	cin>>ib;
	//1 ib = 2.5 dollars
	if(ib>=200){
		cost=(ib*2.5)*0.80;
		dis="20%";
	}else if(ib>=120){
		cost=(ib*2.5)*0.85;	
		dis="15%";
	}else if(ib>=60){
		cost=(ib*2.5)*0.90;
		dis="10%";
	}else if(ib>=30){
		dis="5%"; //dis means discount given to cost
		cost=(ib*2.5)*0.95;
	}else{
		dis="No discount";
		cost=ib*2.5;
	}
	cout<<"This is the amount of money it costs to buy, "<<ib<<" ice bags: "<<cost;
	cout<<"\nWith a discount of: "<<dis;
	return 0;
}

