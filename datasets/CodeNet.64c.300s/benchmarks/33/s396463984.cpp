#include<iostream>
using namespace std;

int main() {
	int a, b;
	char c;
	int l[100];
	for (int i = 0;; i++) {
		cin >> a >> c >> b;
		if (c == '+') {
			l[i] = a + b;
		}else if (c == '-') {
			l[i] = a - b;
		}else if (c == '*'){
			l[i] = a * b;
		}else if (c=='/'){
			l[i] = a / b;
		}else if (c=='?'){
			for (int j = 0; j < i; j++){
				cout << l[j] << endl;
			}
			break;
		}
	}
}