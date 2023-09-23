#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	char op;
	while(1){
	cin>>a>>op>>b;
	if(op=='+') {c=a+b; cout<<c<<endl;}
	if(op=='-') {c=a-b; cout<<c<<endl;}
	if(op=='*') {c=a*b; cout<<c<<endl;}
	if(op=='/') {c=a/b*1.0; cout<<c<<endl;}
	if(op=='?') break;
	}
	return 0;
	}