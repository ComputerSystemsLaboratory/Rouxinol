#define _USE_MATH_DEFINES 
#include <cmath>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<vector>
#include<cctype>
#define rep(i,start,n) for(int i=start;i<n;i++)
#define And &&
#define Or ||
#define Lb cout<<endl
using namespace std;

int main(void) {
	int n; cin >> n;
	vector<int> a(n);
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) {
		if (i != n - 1)cout << a[i] << " ";
		else cout << a[i] << endl;
	}
	rep(i, 1, n) {
		int v = a[i];
		int j = i - 1;

		while (j >= 0 And a[j] > v) {
			a[j+1] = a[j];
			j--;
			a[j+1] = v;
		}
		rep(i, 0, n) {
			if (i != n - 1)cout << a[i] << " ";
			else cout << a[i] << endl;
		}
	}
}