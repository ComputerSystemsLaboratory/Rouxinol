#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	unsigned int n;
	int h, m, s;
	cin >> n;
	h = n / 3600;
	m = (n - (h*3600)) / 60;
	s = n - (h*3600) - (m*60);
	cout << h << ":" << m << ":" << s << endl;

	return 0;
}
