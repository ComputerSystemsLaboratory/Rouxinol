#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a,b,i,sum=0;
	
	while(scanf("%d",&a) != EOF){
		cin>>b;	
		a=a+b;
		while(a!=0){
			a = a / 10;
			sum++;
		}

		cout<<sum<<endl;
		sum=0;
	}
    return 0;
}