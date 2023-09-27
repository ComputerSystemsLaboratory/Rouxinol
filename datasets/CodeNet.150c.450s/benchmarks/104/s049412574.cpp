//--------------------------------------------------template----------------------------------------//
//c
#include <stdio.h>
#include <time.h>
#include <math.h>
//c++
#include <cstdio>
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
#include <vector>
#include <complex>
#include <cmath>
//c++11
#include <tuple>
#define all(c) ((c).begin(),(c).end())
#define rall(c) (c).rbegin(),(c).rend()
//#define sort(v,n) sort(v,v+n)
//#define vsort(v) sort(v.begin(),v.end())
#define vvsort(v) sort(v.rbegin(),v.rend())
#define ll long long
#define pb(a) push_back(a)
#define fi first
#define se second
#define inf 999999999
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
int w, n;

int a[31], b[31];

int main() {
	cin >> w >> n;
	map<int, int> m;
	for (int i = 0; i < w; i++) {
		m[i + 1] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		int c, d;
		scanf("%d,%d", &c, &d);
		int temp = m[c];
		m[c] = m[d];
		m[d] = temp;
	}
	for (int i = 1; i <= w; i++) {
		cout << m[i] << endl;
	}
	return 0;
}