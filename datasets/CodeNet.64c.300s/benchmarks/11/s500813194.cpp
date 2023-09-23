#include <iostream>

using namespace std;

int main() {
	int s;
	cin >> s;
	int h = int(s/3600);
	s -= 3600 * h;
	int m = int(s/60);
	s -= 60 * m;
	cout << h << ":" << m << ":" << s << endl;
	return 0;
}