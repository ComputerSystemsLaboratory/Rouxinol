#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	char x[1200];
	while(1){
		cin>>x;
		if(x[0]=='0')break;
		int sum=0;
		for(int i=0;i<strlen(x);i++){
			sum+=(int)(x[i]-48);
		}
		cout<<sum<<endl;
	}
}
	