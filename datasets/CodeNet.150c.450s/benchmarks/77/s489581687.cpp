#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <sstream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <complex>
#include <vector>
#include <cstdio>
#include <cmath>
#include <time.h>
#define all(c) ((c).begin(),(c).end())
#define rall(c) (c).rbegin(),(c).rend()
#define sort(v,n) sort(v,v+n)
#define vsort(v) sort(v.begin(),v.end())
#define vvsort(v) sort(v.begin(),v.end(),greater<int>())
#define ll long long
#define pb(a) push_back(a)
#define fi first
#define se second
#define inf 999999999
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
int n;
int main() {
	while (cin>>n) {
		if (n == 0)return 0;
		int x[21], y[21];
		for (int i = 0; i < n; i++) {
			cin >> x[i] >> y[i];
		}
		int m; cin >> m;
		char d[31];
		int l[31];
		bool a[21][21];
		for (int i = 0; i < 21; i++) {for (int j = 0; j < 21; j++) {a[i][j] = 0;}}
		a[10][10] = 1;
		for (int i = 0; i < m; i++) {cin >> d[i] >> l[i];}
		int cont = 0;
		int nowx = 10;
		int nowy = 10;
		while (cont < m) {
			if (d[cont] == 'N' || d[cont] == 'S') {
				if (d[cont] == 'N') {
					for (int i = nowy; i <= l[cont] + nowy; i++) {
						a[i][nowx] = 1;
					}
					nowy += l[cont];
				}
				else {
					for (int i = nowy; i >= nowy - l[cont]; i--) {
						a[i][nowx] = 1;
					}
					nowy -= l[cont];
				}
				
			}
			else {
				if (d[cont] == 'E') {
					for (int i = nowx; i <= l[cont] + nowx; i++) { 
						a[nowy][i] = 1; 
					}
					nowx += l[cont];
				}
				else {
					for (int i = nowx; i >= nowx - l[cont]; i--) {
						a[nowy][i] = 1; 
					}
					nowx -= l[cont];
				}
			}
			cont++;
		}
		//for (int i = 0; i < 21; i++) { for (int j = 0; j < 21; j++) { cout << a[i][j] << " "; if (j == 20)cout << endl; } }
		for (int i = 0; i < n; i++) {
			if (a[y[i]][x[i]] != 1) {cout << "No" << endl;break;}
			if (i == n - 1)cout << "Yes" << endl;
		}

	}
}