#include<iostream>
#include<cstdio>

using namespace std;

void Q1() {

	double r;
	double PI = 3.141592653589;
	cin >> r;

	printf("%lf %lf\n", PI*r*r, 2 * r*PI);

}

void Q2() {
	int a, b;
	char op;

	while (true)
	{
		cin >> a >> op >> b;
		if (op == '?') { break; }
		else if (op == '+') {
			cout << a + b << endl;
		}
		else if (op == '-') {
			cout << a - b << endl;
		}
		else if (op == '*') {
			cout << a * b << endl;
		}
		else if (op == '/'){
			cout << a / b << endl;
		}
	}
	
}

int main() {
	Q2();

	return 0;
}