/*Author: Nolan Denson Childers
 *Preferred Name: Puck
 *Date: 9/26/2025
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void speedcheck(int s,int sl){
	int slt = sl-10; // these variables are for if over or under 10 of the speedlimit
	int slt2 = 10+sl;
	int slf = 5+sl; // if under/over sl+5
	int sltf = 15+sl; // if under/over sl+15 
	if(sl<=40){
		if(s<slt){
			cout<<"You are driving like a snail. People behind might beep you.";
		}else if(s<=sl and s>=slt){
			cout<<"Nice speed!";
		}else if(s>sl and s<=slf){
			cout<<"A little bit over the limit!";
		}else if(s>slf and s<=slt2){
			cout<<"Police are watching you, you might get a ticket";
		}else if(s>slt2){
			cout<<"You are crazy! Value your life";
		}
	}else if(sl>=45){
		if(s<slt){
			cout<<"You are driving like a snail. People behind might beep you.";
		}else if(s<=sl and s>=slt){
			cout<<"Nice speed!";
		}else if(s>=sl and s<=slt2){
			cout<<"A little bit over the limit!";
		}else if(s>slt2 and s<=sltf){
			cout<<"Police are watching you, you might get a ticket";
		}else if(s>sltf){
			cout<<"You are crazy! Value your life";
		}
	}
}

int main(int argc, char **argv)
{
	int spd = 0;
	int spdlim = 0;
	cout<<"What is the speed of the vehicle?";
	cin>>spd;
	cout<<"What is the speed limit of the road?";
	cin>>spdlim;
	speedcheck(spd,spdlim);
	return 0;
}
