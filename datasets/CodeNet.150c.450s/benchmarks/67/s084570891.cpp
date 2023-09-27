#define _CRT_SECURE_NO_WARNINGS // #pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <functional>
#include <sstream>
#include <cmath>
#include <set>
#include <map>
using namespace std; 

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define len(x) ((int)(x).size())
#define tmax(a,b,c) max((a),max((b),(c)))
#define tmin(a,b,c) min((a),min((b),(c)))
#define debug(x) cerr << #x << " is " << x << endl;

typedef pair<int, int> Pii;
typedef vector<int> Vi;
typedef vector<vector<int> > VVi;
typedef long long ll;
const int inf = 2e9;
const ll ll_inf = 1e17;
const int mod = 1e9 + 7;
const long double eps = 1e-10;

int main()
{
	int n;
	while(1) {
		cin >> n;
		if (!n) break;
		if (n <= 2) {
			cout << 0 << endl;
			continue;
		}
		map<int, int> a;
		int cnt = 0, sum = 0;
		int l = 0, r = 0, w = 0;
		while(l < n) {
			while (sum < n && r < n) {
				r++;
				sum += r;
				w++;
			}
			if (sum == n) {
				a[w]++;
				//printf("l=%d r=%d\n",l,r);
			}
			while (sum > n && l < n) {
				l++;
				sum -= l;
				w--;
			}
			if (sum == n) {
				if (r != n) {
					a[w]++;
					//printf("l=%d r=%d\n",l,r);
				}
				l++;
				sum -= l;
				w--;
			}
		}
		cout << a.size() << endl;
	}

	return 0;
}