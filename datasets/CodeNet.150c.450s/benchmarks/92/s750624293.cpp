#include<iostream>
using namespace std;

int main(void){
	int a,b,c,d,t;
	while(cin>>a>>b){
		t=a+b;
		
		c=t/1;
		if(c>=1) d=1;
		
		c=t/10;
		if(c>=1) d=2;
		
		c=t/100;
		if(c>=1) d=3;
		
		c=t/1000;
		if(c>=1) d=4;
		
		c=t/10000;
		if(c>=1) d=5;
		
		c=t/100000;
		if(c>=1) d=6;
		
		c=t/1000000;
		if(c>=1) d=7;
		
		cout<<d<<endl;
	}
	return 0;
}