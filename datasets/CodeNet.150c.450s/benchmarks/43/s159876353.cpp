#include <iostream>
using namespace std;

#include <algorithm>

int main() {
	int n;
	while (1) {
		cin >> n;
		if (n==0) break;
		int p1=0, p2=0;
		int c1, c2;
		for (int i=0; i<n; i++) {
			cin >> c1 >> c2;
			if (c1==c2) p1+=c1, p2+=c2;
			if (c1>c2) p1+=c1+c2;
			if (c1<c2) p2+=c1+c2;
		}
		cout << p1 << " " << p2 << endl;
	}
	return 0;
}