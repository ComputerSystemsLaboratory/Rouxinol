#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a,b,i;
	char op;
	for(;;){
	cin>> a >> op >> b;
	if(op=='+'){ 
	cout<<a+b<<endl;
	}
	else if(op=='-'){
	cout<<a-b<<endl;
	}
	else if(op=='*'){
	cout<<a*b<<endl;
	}
	else if(op=='/'){
	cout<<a/b<<endl;
	}
	else{
		break;
	}
	}
		
return 0;

}