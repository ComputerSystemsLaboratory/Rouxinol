#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	long int a,b;
	cin>>a>>b;
	while((a!=0)&&(b!=0)){
		if(a>b){
			a=a%b;
		}else{
			b=b%a;
		}
	}
	if(a==0){
		cout<<b<<endl;
	}else{
		cout<<a<<endl;
	}
	return 0;
}