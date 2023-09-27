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
	int r, c; cin >> r >> c;
	vector<vector<int> > a(r, vector<int>(c));
	vector<int> b(r);
	vector<int> cc(c);
	rep(i, 0, r) {
		rep(j, 0, c) {
			cin >> a[i][j];

		}
	}
	rep(i, 0, r) {
		rep(j, 0, c) {
			b[i] += a[i][j];
		}
	}
	rep(i, 0, c) {
		rep(j, 0, r) {
			cc[i] += a[j][i];
		}
	}
	int d = 0;
	rep(i, 0, r) {
		d += b[i];
	}
	rep(i, 0, r) {
		rep(j, 0, c) {
			cout << a[i][j]<<" ";
		}
		cout << b[i] << endl;
	}
	rep(i, 0, c) {
		cout << cc[i]<<" ";
	}
	cout << d << endl;


}