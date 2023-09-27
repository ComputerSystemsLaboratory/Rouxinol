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
	int n, m; cin >> n >> m;
	vector<vector<int> > a(n, vector<int>(m));
	vector<int> b(m);
	vector<long long> c(n);
	//????????????
	rep(i, 0, n) {
		rep(j, 0, m) {
			cin >> a[i][j];
		}
	}
	
	rep(i, 0, m) {
		cin >> b[i];
	}

	rep(i, 0, n) {
		c[i] = 0;
		rep(j, 0, m) {
			c[i] += a[i][j] * b[j];
		}
	}

	rep(i, 0, n) {
		cout << c[i] << endl;
	}
	return 0;
}