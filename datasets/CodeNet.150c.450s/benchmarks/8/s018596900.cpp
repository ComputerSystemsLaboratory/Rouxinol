#include<iostream>
#include<string>
using namespace std;

int main() {
	int i, n, a = 0, b = 0;
	string sa, sb;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> sa >> sb;
		if (sa.compare(sb) > 0)a += 3;
		else if (sa.compare(sb) < 0)b += 3;
		else {a++;b++;}
	}
	cout << a << " " << b << endl;
	return 0;
}