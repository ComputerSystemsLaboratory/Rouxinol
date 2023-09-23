#include <iostream>
#include <stdio.h>
using namespace std;
int calc1(int a,char op,int b){
	if(op=='+'){
		return a + b;
	}else if(op=='-'){
		return a - b;
	}else if(op=='*'){
		return a * b;
	}else{
		return a / b;
	}
}

int main()
{
	int a,b;
	char op;
	cin>>a;
	cin>>op;
	cin>>b;
	while(op != '?'){
		cout<<calc1(a,op,b)<<endl;
		cin>>a;
		cin>>op;
		cin>>b;
	}
	return 0;
}