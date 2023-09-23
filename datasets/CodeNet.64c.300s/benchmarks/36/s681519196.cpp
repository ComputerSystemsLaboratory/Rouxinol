#include <cstdio>
#include <iostream>
#include <algorithm>
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)

using namespace std;

int main() {
	int a[3];
	rep(i,3) {
		cin >> a[i];
	}
	sort(a, a+3);
	rep(i,2) {
		cout << a[i] << " ";
	}
	cout << a[2] << endl;
	return 0;
}