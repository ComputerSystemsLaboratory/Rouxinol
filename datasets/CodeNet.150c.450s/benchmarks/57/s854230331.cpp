#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<char> str;
	int num1, num2;
	char ope;
	int ans, flag = 0;
	while(1) {
		cin >> num1 >> ope >> num2;
		switch(ope) {
		case '+':
			cout << num1 + num2 << endl;
			break;
		case '-':
			cout << num1 - num2 << endl;
			break;
		case '*':
			cout << num1 * num2 << endl;
			break;
		case '/':
			cout << num1 / num2 << endl;
			break;
		case '?':
			flag = 1;
			break;
		}
		if(flag == 1) {
			break;
		}
	}

	return 0;

}