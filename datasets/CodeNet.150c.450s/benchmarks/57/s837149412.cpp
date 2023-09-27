#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a, b;
	char x = ' ';
	while (x != '?'){
		cin >> a >> x >> b;
		if (x == '+')
			cout << a + b << endl;
			else if (x == '-')
				cout << a - b << endl;
				else if (x == '*')
					cout << a * b << endl;
					else if (x == '/')
						cout << a / b << endl;
	}
	return 0;
}
