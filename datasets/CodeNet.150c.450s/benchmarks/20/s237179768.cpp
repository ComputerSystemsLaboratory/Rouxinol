#include<iostream>
#include<string>
using namespace std;
int main() {
	int h, m, s, x, y;
	cin >> x;
	s = x % 60;
	h = x / 3600;
	y = x / 60;
	m = y % 60;
	cout << h << ":" << m << ":" << s << endl;
}
