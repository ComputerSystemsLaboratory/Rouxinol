#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	int a, b, ans;
	string op;

	while (1){

		cin >> a >> op >> b;


		if (op == "+")
			ans = a + b;
		else if (op == "-")
			ans = a - b;
		else if (op == "*")
			ans = a * b;
		else if (op == "/")
			ans = a / b;
		else
			break;

		//cout << fixed << setprecision(5);
		cout << ans << endl;
	}

	return 0;
}