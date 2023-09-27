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
#include <bitset>
#include <cstdio>
#include <cmath>
#include <time.h>
#include <tuple>
#define all(c) ((c).begin(),(c).end())
#define rall(c) ((c).rbegin(),(c).rend())
//#define sort(v,n) sort(v,v+n)
#define ll long long
#define fi first
#define se second
#define inf 999999999
using namespace std;
const ll MOD = 1e9 + 7;
const double PI = acos(-1.0);
//---------------------------------------------------------------------------------------------//
int n;


int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		set<string> set1;
		for (int j = 1; j < s.length(); j++) {
			string a, b;
			a = s.substr(0, j);
			b = s.substr(j, s.length() - j);
			set1.insert(a + b); //cout << a + b << endl;
			set1.insert(b + a); //cout << b + a << endl;
			string t, h;
			for (int k = a.length()-1; k>=0; k--) {
				t += a[k];
			}
			for (int k = b.length()-1; k >= 0; k--) {
				h += b[k];
			}
			set1.insert(a + h);// cout << a + h << endl;
			set1.insert(b + t); //cout << b+t << endl;
			set1.insert(t + h); //cout << t+h << endl;
			set1.insert(h + t); //cout << h+t << endl;
			set1.insert(h + a); //cout << h+a << endl;
			set1.insert(t + b); //cout << t+b << endl;
		}
		cout << set1.size() << endl;
	}
	return 0;
}