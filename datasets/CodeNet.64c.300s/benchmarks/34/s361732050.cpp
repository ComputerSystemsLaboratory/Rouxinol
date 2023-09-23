#include <iostream>
#include <cstdio>
using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	int n;
	int a[110];
	cin >> n;
	rep(i,n) {
		cin >> a[i];
	}
	rep(i,n) {
		cout << a[i];
		if(i < n - 1) cout << " ";
	}
	cout << endl;
	
	rep2(i,1,n) {
		int v = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > v) {
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = v;
		rep(j,n) {
			cout << a[j];
			if(j < n - 1) cout << " ";
		}
		cout << endl;
	}
	return 0;
}