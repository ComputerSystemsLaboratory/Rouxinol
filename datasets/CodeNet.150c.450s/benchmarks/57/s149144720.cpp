#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	while(1){
		int a,b;
		char op;
		scanf("%d %c %d", &a,&op,&b);
		if(op=='+'){
			cout<< a+b<<endl;
		}
		if(op=='-'){
			cout<< a-b<<endl;
		}
		if(op=='*'){
			cout<< a*b<<endl;
		}
		if(op=='/'){
			cout<< a/b<<endl;
		}
		if(op=='?'){
			break;
		}
	}
return 0;
}