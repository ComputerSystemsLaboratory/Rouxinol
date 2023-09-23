
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int a=0,b=0,n;
	for(int i=0;i<4;i++){
		cin>>n;
		a=a+n;
	}
	for(int i=0;i<4;i++){
		cin>>n;
		b=b+n;
	}
	if(a>b){
		cout<<a<<endl;
	}
	else{
		cout<<b<<endl;
	}
	return 0;
}