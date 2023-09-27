#define _USE_MATH_DEFINES 
#include <cmath>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<vector>
#define rep(i,start,n) for(int i=start;i<n;i++)
#define And &&
#define Or ||
#define Lb cout<<endl
using namespace std;

int main(void) {
	int n, b, f, r, v;
	cin >> n;
	int a[4][3][10] = {};
	rep(i, 0, n) {
		cin >> b >> f >> r >> v;
		a[b - 1][f - 1][r - 1] += v;
	}
	rep(i, 0, 4) {
		rep(j, 0, 3) {
			rep(k, 0, 10) {
				cout << " " << a[i][j][k];
			}
			Lb;
		}
		if (i != 3) {
			rep(l, 0, 20) cout << "#";
			Lb;
		}
	}
}