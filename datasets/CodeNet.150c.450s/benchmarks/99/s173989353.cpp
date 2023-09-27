#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int N(string d) {
	int s = 0;
	map<char, int>a;
	a['m'] = 1000;
	a['c'] = 100;
	a['x'] = 10;
	a['i'] = 1;
	for (int b = 0; b < d.length(); b++) {
		if (d[b] > '9' || d[b] < '0') {
			if (b == 0 || (d[b-1] > '9' || d[b-1] < '0'))s += a[d[b]];
			else s += a[d[b]] * (d[b-1] - 48);
		}
	}
	return s;
}
void write(int a) {
	map<int, char>c;
	c[1000] = 'm';
	c[100] = 'c';
	c[10] = 'x';
	c[1] = 'i';
	for (int b = 1000; b != 0; b /= 10) {
		switch (a / b) {
		case 0:break;
		case 1:cout << c[b]; break;
		default:cout << a / b << c[b]; break;
		}
		a -= b*(a / b);
	}
	cout << endl;
}
int main() {
	int b;
	cin >> b;
	for (int c = 0; c < b; c++) {
		string d, e;
		cin >> d >> e;
		write(N(d)+N(e));
	}
}