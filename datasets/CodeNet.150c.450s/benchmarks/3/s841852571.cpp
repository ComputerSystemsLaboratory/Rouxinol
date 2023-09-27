#include <iostream>
#include <string>
using namespace std;

int main() {
	string str,command,p;
	char cpy[1000];
	int a, b, q;

	cin >> str;
	cin >> q;

	for (int i = 0;i < q;i++) {
		cin >> command;
		
		if (command == "print") {
			cin >> a >> b;
			for (int j = a;j < b+1;j++)
				cout << str[j];
			cout << endl;
		}
		else if(command == "reverse") {
			cin >> a >> b;
			for (int j = a;j < b+1;j++)
				cpy[j] = str[j];
			for (int j = a;j < b+1;j++)
				str[a + b - j] = cpy[j];
		}
		else if(command=="replace") {
			cin >> a >> b >> p;
			for (int j = a;j < b+1;j++)
				str[j] = p[j - a];
		}
	}
	return 0;
}