#include<iostream>
using namespace std;
int main() {
	char a;
	int b[3];
	cin >> b[0]>>a>>b[1];
	while (a != '?') {
		if (a == '+')
			cout << b[0] + b[1] << endl;
		else if (a == '-')
			cout << b[0] - b[1] << endl;
		else if (a == '*')
			cout << b[0] * b[1] << endl;
		else if (a == '/')
			cout << b[0] / b[1] << endl;
		cin >> b[0] >> a >> b[1];
	}
	return 0;
}