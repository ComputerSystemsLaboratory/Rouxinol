#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	// int l, m, s;
	// if (a < b) {
	// 	if (b < c) {
	// 		l = c;
	// 		m = b;
	// 		s = a;
	// 	} else {
	// 		l = b;
	// 		if (a < c) {
	// 			m = c;
	// 			s = a;
	// 		} else {
	// 			m = a;
	// 			s = c;
	// 		}
	// 	}
	// } else {
	// 	if (b > c) {
	// 		l = a;
	// 		m = b;
	// 		s = c;
	// 	} else {
	// 		s = b;
	// 		if (a < c) {
	// 			l = c;
	// 			m = a;
	// 		} else {
	// 			l = a;
	// 			m = c;
	// 		}
	// 	}
	// }

	// answer
	int s = a;
	int m = b;
	int l = c;
	int tmp;

	if (s > m) {
		tmp = s;
		s = m;
		m = tmp;
	}
	if (m > l) {
		tmp = m;
		m = l;
		l = tmp;
	}
	if (s > m) {
		tmp = s;
		s = m;
		m = tmp;
	}
	cout << s << " " << m << " " << l << "\n";

	return 0;
}