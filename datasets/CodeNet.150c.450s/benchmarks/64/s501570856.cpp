#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;


int A[25];
int n;

int add(int m,int i) {
	if (i > n) return 0;
	if (m == 0)return 1;
	if (m < 0)return 0;
	int res = add(m, i + 1) || add(m - A[i], i + 1);
	return res;
}

int main() {
	
	int q, m;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> A[i];

	cin >> q;
	for (int i = 0; i < q; i++){
		cin >> m;
		if (add(m, 0)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}