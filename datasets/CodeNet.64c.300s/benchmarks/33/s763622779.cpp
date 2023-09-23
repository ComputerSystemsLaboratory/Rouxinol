#include<iostream>
#include<cstdio>

using namespace std;

int main(){

	int a,b,z;
	char op;

	while(1){
	
	cin >> a >> op >> b;

	if(op == '+'){
		z = a + b;
		
		}
	if(op == '-'){
		z = a - b;
		}
	if(op == '*'){
		z = a * b;
		}
	if(op == '/'){
		z = a / b;
		}
		if( op == '?')break;
	
	cout << z << endl;
	
	}
	

	
	
return 0;
}