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
	int n, m, l; cin >> n >> m >> l;
	vector<vector<int> > a(n, vector<int>(m));
	vector<vector<int> > b(m, vector<int>(l));
	vector<vector<long long> > c(n, vector<long long>(l));
	rep(i, 0, n) {
		rep(j, 0, m) {
			cin >> a[i][j];
		}
	}
	rep(i, 0, m) {
		rep(j, 0, l) {
			cin >> b[i][j];
		}
	}
	rep(i, 0, n) {
		rep(j, 0, l) {
			rep(k, 0, m) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	rep(i, 0, n) {
		rep(j, 0, l) {
			cout << c[i][j];
			if (j != l - 1)cout << " ";
		}
		Lb;
	}
}