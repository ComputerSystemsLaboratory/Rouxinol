
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void){
	int a[6],ue,sita,hokan;
	char huku;

	cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
while(cin>>huku){
	if(huku=='N'){
		hokan=a[1];
		a[1]=a[2];
		a[2]=a[6];
		a[6]=a[5];
		a[5]=hokan;
	}
	if(huku=='E'){
		hokan=a[1];
		a[1]=a[4];
		a[4]=a[6];
		a[6]=a[3];
		a[3]=hokan;
	}
	if(huku=='S'){
		hokan=a[1];
		a[1]=a[5];
		a[5]=a[6];
		a[6]=a[2];
		a[2]=hokan;
	}
	if(huku=='W'){
		hokan=a[1];
		a[1]=a[3];
		a[3]=a[6];
		a[6]=a[4];
		a[4]=hokan;
	}
	}
cout<<a[1]<<endl;
	return 0;
}

