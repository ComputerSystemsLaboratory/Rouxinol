#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int a, b;
	char op;
	while(true){
	cin >> a >> op >> b;
	if(op == '?') break;
	else if(op == '+') cout << a + b;
	else if(op == '-') cout << a - b;
	else if(op == '*') cout << a * b;
	else if(op == '/') cout << a / b;
	cout << endl;
	}
}