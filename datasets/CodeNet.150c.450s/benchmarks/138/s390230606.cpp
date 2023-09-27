
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main(void){
	int x,y,d,a,b;
	cin>>x>>y;
	if(y>x){
		b=y;
		y=x;
		x=b;
	}
	if(x==y){
		cout<<x<<endl;
		return 0;
	}
	a=x%y;
	for(d=a;;d--){
		if(y%d==0&&a%d==0){
			cout<<d<<endl;
			break;
		}
	}
	return 0;
}

