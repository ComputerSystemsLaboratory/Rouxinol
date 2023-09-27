#include<iostream>
using namespace std;

int main() {
	int h, m, s, num;
	cin >> num;
	h = num / 3600;
	m = (num - 3600 * h)/60;
	s = num - (h * 3600 + m * 60);
	cout << h << ":" << m << ":" << s << endl;


	return 0;
}