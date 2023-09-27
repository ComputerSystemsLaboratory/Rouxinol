#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define INF 1000000000
#define rep(i,a,b) for (int i=(a);i<(b);i++)
#define rev(i,a,b) for (int i=(a)-1;i>=b;i--)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef queue<int> qi;
typedef vector<int> vi;
typedef vector<string> vs;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

char c[9][6] = {
	{'.', ',', '!', '?', ' '},
	{'a', 'b', 'c'},
	{'d', 'e', 'f'},
	{'g', 'h', 'i'},
	{'j', 'k', 'l'},
	{'m', 'n', 'o'},
	{'p', 'q', 'r', 's'},
	{'t', 'u', 'v'},
	{'w', 'x', 'y', 'z'}
};

int main() {
	int n;
	cin >> n;
	rep(i,0,n) {
		string s;
		cin >> s;
		int num = 0;
		string ans = "";
		rep(j,0,s.size()) {
			if(s[j] != '0') num++;
			else {
				if(num == 0) continue;
				char tmp = s[j-1];
				int b = atoi(&tmp)-1;
				if(b == 0) ans += c[b][(num-1)%5];
				else if(b == 6 || b == 8) ans += c[b][(num-1)%4];
				else ans += c[b][(num-1)%3];
				num = 0;
			}
		}
		cout << ans << endl;

	}

	return 0;
}