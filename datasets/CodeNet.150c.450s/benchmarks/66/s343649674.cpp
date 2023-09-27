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
string u[257];
int m;
string t[257];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)cin >> u[i];
	cin >> m;
	for (int i = 0; i < m; i++)cin >> t[i];
	bool open = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (t[i] == u[j]) {
				if (!open) {
					cout << "Opened by ";
					cout << t[i] << endl;
					open = 1;
					break;
				}
				else {
					cout << "Closed by ";
					cout << t[i] << endl;
					open = 0;
					break;
				}
			}
			if (j == n - 1) {
				cout << "Unknown ";
				cout << t[i] << endl;
			}
		}
	}
}