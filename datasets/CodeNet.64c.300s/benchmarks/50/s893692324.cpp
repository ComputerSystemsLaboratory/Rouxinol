#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	int n, a[110], count = 0;
	cin >> n;
	rep(i,n) {
		cin >> a[i];
	}
	rep(i,n) {
		for(int j = n-1; j > i; j--) {
			if(a[j] < a[j-1]) {
				swap(a[j],a[j-1]);
				count++;
			}
		}
	}
	rep(i,n) {
		cout << a[i];
		if(i < n - 1) cout << " ";
	}
	cout << endl;
	cout << count << endl;
	return 0;
}