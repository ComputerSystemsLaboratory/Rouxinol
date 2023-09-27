#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int a,b,A;
	char op;;
	while(1){
		cin >> a >> op >> b ;
		if ( op == '+' ){
			A = a + b;
		}else if ( op == '+' ){
			A = a + b;
		}else if ( op == '-' ){
			A = a - b;
		}else if ( op == '*' ){
			A = a * b;
		}else if ( op == '/' ){
			A = a / b;
		}else{
			break;
		}
		cout << A << endl;
}
    return 0;
}