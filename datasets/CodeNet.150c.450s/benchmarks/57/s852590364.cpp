#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define PI 3.14159265358979323

int main(int argc, char* argv[]) {
	char op;
	int a, b;


	while(1){
		cin >> a >> op >> b;
		if(op == '?') break;

		switch(op)
		{
			case '+': cout << a + b << endl; break;
			case '-': cout << a - b << endl; break;
			case '*': cout << a * b << endl; break;
			case '/': cout << a / b << endl; break;
		}
	}

	return 0;
}