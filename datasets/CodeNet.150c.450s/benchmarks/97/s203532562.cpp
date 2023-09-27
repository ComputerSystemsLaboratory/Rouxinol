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
//#define sort(v,n) sort(v,v+n)
//#define vsort(v) sort(v.begin(),v.end())
//#define vvsort(v) sort(v.begin(),v.end(),greater<int>())
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
	while (cin >> n, n) {
		vector<pair<int, int>> vp1;
		vector<pair<int, int>> vp2;
		vp1.push_back(pair<int, int>(0, 0));
		vp2.push_back(pair<int, int>(0, 0));
		for (int i = 0; i < n - 1; i++) {
			int a, d; cin >> a >> d;
			if (d == 0) {
				int b, c;
				b = vp1[a].first;
				c = vp1[a].second;
				vp1.push_back(pair<int, int>(b - 1, c));
				vp2.push_back(pair<int, int>(c,b-1));
			}
			else if (d == 1) {
				int b, c;
				b = vp1[a].first;
				c = vp1[a].second;
				vp1.push_back(pair<int, int>(b , c-1));
				vp2.push_back(pair<int, int>(c-1, b));
			}
			else if (d == 2) {
				int b, c;
				b = vp1[a].first;
				c = vp1[a].second;
				vp1.push_back(pair<int, int>(b + 1, c));
				vp2.push_back(pair<int, int>(c, b + 1));
			}
			else {
				int b, c;
				b = vp1[a].first;
				c = vp1[a].second;
				vp1.push_back(pair<int, int>(b , c+1));
				vp2.push_back(pair<int, int>(c+1, b ));
			}
		}
		sort(vp1.begin(), vp1.end());
		sort(vp2.begin(), vp2.end());
		//cout << vp1[0].first <<" "<< vp1[0].second << endl;
		//cout << vp1[n-1].first <<" "<< vp1[n-1].second << endl;
		//cout << vp2[0].first <<" "<< vp2[0].second << endl;
		//cout << vp2[n-1].first <<" "<< vp2[n-1].second << endl;
		cout << vp1[n - 1].first - vp1[0].first + 1 << " ";
		cout << vp2[n - 1].first - vp2[0].fi + 1 << endl;
	}
	return 0;
}