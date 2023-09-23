#include <iostream>
#include <utility>

using namespace std;

int main() {
	long long p=10000000000,c,n,r = -10000000000;
	cin >> n;
	for(int i = 0;i < n;i++) {
		cin >> c;
		r = max(r,c-p);
		p = min(p,c);
	}
	cout << r << endl;
}

