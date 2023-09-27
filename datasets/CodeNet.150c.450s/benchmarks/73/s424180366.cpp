#include <iostream>
using namespace std;


const int max_n = 100001;
int dat[max_n];


void init() {
	for (int i = 0; i < max_n; i++) {
		dat[i] = 0;
	}
}

void update(int i,int v) {
	while(i < max_n) {
		dat[i] += v;
		i += i & -i;
	}
}

int find(int x) {
	int result = 0;
	while (x > 0) {
		//cout << "xdat[" << x << "] = " << dat[x] << endl;
		result += dat[x];
		x -= x & -x;
		
	}
	 return result;
}

int main() {
	init();

	int n,q;
	cin >> n >> q;

	for (int i = 0; i < q; i++) {
		int com, x, y;
		cin >> com >> x >> y;
		if (com==0) {
			update(x,y);
		} else {
			cout << find(y) - find(x - 1) << endl;
		}

	}
	return 0;
}