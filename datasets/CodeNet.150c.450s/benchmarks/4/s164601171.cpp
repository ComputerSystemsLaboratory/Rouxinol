#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	int exam1,exam2,reexam,gokei;
	while(cin>>exam1>>exam2>>reexam){
		if(exam1==-1&&exam2==-1&&reexam==-1) break;
		while(1){
		gokei=exam1+exam2;
		if(exam1==-1||exam2==-1){
			cout<<"F"<<endl;
			break;
			}
		if(gokei>=80){
			cout<<"A"<<endl;
			break;
			}
		if(gokei>=65&&gokei<80){
			cout<<"B"<<endl;
			break;
			}
		if(gokei>=50&&gokei<65){
			cout<<"C"<<endl;
			break;
			}
		if(gokei>=30&&gokei<50&&reexam<50){
			cout<<"D"<<endl;
			break;
			}
		if(gokei>=30&&reexam>=50){
			cout<<"C"<<endl;
			break;
			}
		if(gokei<30){
			cout<<"F"<<endl;
			break;
			}
		}
	}
	return 0;
}