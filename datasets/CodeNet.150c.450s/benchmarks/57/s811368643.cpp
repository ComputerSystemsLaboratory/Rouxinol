#include<iostream>
using namespace std;

int main(){
	int a, b;
	char op;
	bool flg = true;
	while (flg){
		cin >> a >> op >> b;
		switch (op){
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '/':
			if (b != 0) cout << a / b << endl;
			break;
		case '?':
			flg = false;
		}
	}
}