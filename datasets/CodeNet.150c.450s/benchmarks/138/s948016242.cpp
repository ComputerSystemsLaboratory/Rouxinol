#include <iostream>

using namespace std;

int keisann(int a,int b) {
	while (true) {
		a=a%b;
		if (a != 0) {
			b = b%a;
			if (b == 0) { cout << a<<endl; return 0; }
		}
		else if (a == 0) {
			cout << b<<endl;
			return 0;
		}
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	if (b > a) {
		keisann(b, a);
	}
	else if (b == a) {
		cout << a << endl;
	}
	else {
		keisann(a, b);
	}
}