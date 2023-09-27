#include <iostream>
using namespace std;
int main(void) {
	int S;
	cin >> S;
	int h, m, s;
	h = (S / 60) / 60;
	m = (S / 60) % 60;
	s = S % 60;
	cout << h << ":" << m << ":" << s << endl;
	return 0;
}