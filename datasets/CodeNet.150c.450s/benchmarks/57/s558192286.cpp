
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a,b;
	string op;
	while(1){
	cin >> a >> op >> b;
	if(op == "+"){
		cout << a+b << endl;
	}
	else if(op == "-"){
		cout << a-b << endl;
	}
	else if(op == "*"){
		cout << a*b << endl;
	}
	else if(op == "/"){
		cout << a/b << endl;
	}
	if(op == "?"){
		break;
	}
	}
	return 0;
}