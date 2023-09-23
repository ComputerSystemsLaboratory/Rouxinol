#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int S;
	int h, m, s;
	cin >> S;

	h = S / 3600;
	m = (S - 3600 * h) / 60;
	s = S - 3600 * h - 60 * m;

	cout << h << ":" << m << ":" << s << endl;

	return 0;

}