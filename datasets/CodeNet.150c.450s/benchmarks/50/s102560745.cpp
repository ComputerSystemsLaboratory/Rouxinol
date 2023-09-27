#include<iostream>
using namespace std;

int main(){
	int change, pay, cnt;
	while(true){
		cin>>pay; if(pay==0) break;
		cnt=0;
		change = 1000 - pay;
		cnt+=  change / 500 ;
		cnt+= (change / 100) %5;
		cnt+= (change / 50)  %2;
		cnt+= (change / 10)  %5;
		cnt+= (change / 5)   %2;
		cnt+=  change 	   %5;
		cout<<cnt<<endl;
	}
	return 0;
}