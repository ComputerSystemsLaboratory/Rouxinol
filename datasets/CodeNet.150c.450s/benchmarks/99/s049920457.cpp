#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };

struct UnionFind {
	vector<int> v;
	UnionFind(int n) : v(n) { for (int i = 0; i < n; i++) v[i] = i; }
	int  find(int x) { return v[x] == x ? x : v[x] = find(v[x]); }
	void unite(int x, int y) { v[find(x)] = find(y); }
};

int main() {
	int n;
	cin >> n;
	while (n--) {
		string s[2];
		cin >> s[0] >> s[1];
		int num[2] = { 0 };
		REP(j,2){
			REP(i, s[j].length()) {
				if (!isdigit(s[j][i])) {
					int mal;
					if (s[j][i] == 'm')mal = 1000;
					if (s[j][i] == 'c')mal = 100;
					if (s[j][i] == 'x')mal = 10;
					if (s[j][i] == 'i')mal = 1;
					if (i != 0 && isdigit(s[j][i - 1])) {
						num[j] += (s[j][i - 1] - '0')*mal;
					}
					else {
						num[j] += mal;
					}
				}
			}
		}
		num[0] += num[1];
		REP(i,4) {
			int mal = 1;
			REP(j, (3 - i))
				mal *= 10;
			if ((num[0] / mal)%10 > 0) {
				char c;
				if (i == 0)c = 'm';
				if (i == 1)c = 'c';
				if (i == 2)c = 'x';
				if (i == 3)c = 'i';
				if((num[0] / mal) % 10!=1)
				cout << (num[0] / mal) % 10 << c;
				else
					cout << c;
			}
		}
		cout << endl;
	}
}