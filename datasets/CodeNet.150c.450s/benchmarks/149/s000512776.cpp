#include <iostream>

using namespace std;

const int MAX_N = 10001;

int s[MAX_N];
int r[MAX_N];

void init() {
	for (int i = 0; i < MAX_N; i++) {
		s[i] = i;
		r[i] = 0;
	}
}

int find(int i) {
	if (s[i]==i) {
		return i;
	}

	return s[i] = find(s[i]);
}


void unite(int x,int y) {
	x = find(x);
	y = find(y);
	if (x == y) {
		return;
	}

	if (r[x] > r[y]) {
		s[y] = x; 
	} else {
		s[x] = y;
		if (r[x] == r[y]) {
			r[y] ++;
		}
	}
}

int main() {
	int n,q;
	cin >> n >> q;

	init();

	for (int i = 0; i < q; i++) {
		int com,x,y;
		cin >> com >> x >> y;
		if (com == 0) {
			unite(x,y);
		} else {
			if (find(x) == find(y)) {
				cout << "1" << endl;
			} else {
				cout << "0"  << endl;				
			}

		}

	}

	return 0;


}