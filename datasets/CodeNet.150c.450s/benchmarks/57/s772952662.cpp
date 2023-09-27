#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int a,b,w,e,r,t;
char op;
	for(;;){
	cin>>a>>op>>b;
	if(op=='+'){
	w=a+b;
	cout<<w<<endl;
	}else if(op=='-'){
	e=a-b;
	cout<<e<<endl;
	}else if(op=='*'){
	r=a*b;
	cout<<r<<endl;
	}else if(op=='/'){
	t=a/b;
	cout<<t<<endl;
	}else{
	break;
	}
	}
	return 0;
}