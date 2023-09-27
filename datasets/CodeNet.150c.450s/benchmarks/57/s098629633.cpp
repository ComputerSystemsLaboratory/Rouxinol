#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>


#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

int main(void) {
	double a, b = 0;
	double result[1000000];
	int check = 0;
	string op;
	for (int i = 0; i < 1000000;++i) {
		CI a >> op >> b;

		if (op == "?") {
			check = i;
			break;
		}
		if (op == "+") {
			result[i] = a + b;
		}
		if (op == "-") {
			result[i] = a - b;
		}
		if (op == "*") {
			result[i] = a * b;
		}
		if (op == "/") {
			result[i] = (int)(a / b);
		}
	}
	for (int i = 0; i < check;++i) {
		CO (int)result[i] E
	}
}