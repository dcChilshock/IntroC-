/*Author: Nolan Denson Childers
 * Preferred Name: Puck
 * Date 9/19/2025
 */
// psudo code is ask for age, age determines category and price so long else if statement
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
	std::string name,cate,mem;
	int age=0,m=0,price=0; 
	
	cout<<"What is the Customers Name? ";
	cin>>name;
	cout<<"\nWhat is the Customers age? ";
	cin>>age;
	cout<<"\nWhat is the Customers membership status? \n(1 for yes, 0 for no): ";
	cin>>m; //asking customer info

	if (age>=65){//how much to pay for a ticket at each age, and what category its in.
		price=40;
		cate="Senior";
	}else if (age>17){
		price=50;
		cate="Adult";
	}else if (age>13){
		price=45;
		cate="Young Adult";
	}else if (age>2){
		price=25;
		cate="Child";
	}
	else{
		price=2;
		cate="Baby";
	}
	if(m>0){
		mem = "Yes";
	}
	else {
		mem = "No";
	}
	cout<<"Big Cruise Lake Report"; //print out results
	cout<<"\n\nCustomer Name       Category     Membership    Price";
	cout<<"\n"<<name<<"                "<<cate<<"            "<<m<<"            "<<"$"<<price;
	return 0;
}

