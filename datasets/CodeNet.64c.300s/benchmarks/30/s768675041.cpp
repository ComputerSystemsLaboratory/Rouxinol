#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	for(;;){
		int a,b=0,c=0;
		cin>>a;
		if(a==0)break;
		b=1000-a;
		c=(b/500)+((b%500)/100)+(((b%500)%100)/50)+((((b%500)%100)%50)/10)+(((((b%500)%100)%50)%10)/5)+(((((b%500)%100)%50)%10)%5);
		cout<<c<<endl;
	}
	return 0;
}