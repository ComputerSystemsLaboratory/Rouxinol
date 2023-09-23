#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n,a,b,c;
	cin>> n;
	for(;n>0;n--){
	cin>> a>> b>> c;
	if(a*a+b*b==c*c){
		cout<< "YES"<<endl;
	}
	else if(b*b+c*c==a*a){
		cout<< "YES"<<endl;
	}
	else if(c*c+a*a==b*b){
		cout<< "YES"<<endl;
	}
	else{
		cout<< "NO"<<endl;
	}
	}
	return 0;
}