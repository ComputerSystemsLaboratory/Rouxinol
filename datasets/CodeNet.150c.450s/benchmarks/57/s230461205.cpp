#include <iostream>
#include <string>

using namespace std;

int main(){
	int a, b,ret;
	string op;
	while (cin >> a >> op >> b,op != "?"){
		if (op == "-") cout << (a - b) << endl;
		if (op == "+") cout << (a + b) << endl;
		if (op == "*") cout << (a * b) << endl;
		if (op == "/") cout << (int)(a / b) << endl;
	}
	return 0;
}