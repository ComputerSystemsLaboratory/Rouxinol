#include <iostream>
#include <vector>

using namespace std;


int main() {
	int n, ka, kb;
	int a, b;
	vector<pair<int, int> > dst;
	while (cin >> n && n != 0) {
		a = b = 0;
		while (n-->0 && cin >> ka >> kb) {
			if (ka > kb)
				a += (ka + kb);
			else if (ka < kb)
				b += (ka + kb);
			else {
				a += ka;
				b += kb;
			}
		}
		dst.push_back(pair<int, int>(a, b));
	}
	for (vector<pair<int, int> >::iterator it = dst.begin(); it < dst.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	return 0;
}
