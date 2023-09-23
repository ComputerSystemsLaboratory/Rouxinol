#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,b,c,count=0;
	while(cin>>a>>b){
		count=0;
		 c=a+b;
		while(c!=0){
			c=c/10;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
