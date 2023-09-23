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
		int Min = i;
		rep2(j,i,n) {
			if(a[j] < a[Min]) {
				Min = j;
			}
		}
		if(i != Min) {
			swap(a[i],a[Min]);
			count++;
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