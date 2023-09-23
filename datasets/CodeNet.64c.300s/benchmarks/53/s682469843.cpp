/*
 * taete.cpp
 *
 *  Created on: 2018/04/26
 *      Author: J01003
 */
#include<iostream>
using namespace std;

int main(){

	int a,b,c,d;
	d=0;

	while(1){
		cin>>a>>b>>c;
		if(c%a==0){
			d=d+1;
		}
		a=a+1;
		if(a>b)
			break;

	}
	cout<<d<<endl;
	return 0;
}





