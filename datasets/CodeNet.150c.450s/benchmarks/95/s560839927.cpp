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

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while(true) {

		int n;
		cin >> n;
		if(!n) break;

		int b1 = 0, b2 = 0;
		int ans = 0;
		rep(i,0,n) {
			string s;
			cin >> s;
			if(s == "lu") {
				b2 = b1;
				b1 = 1;
			} else if(s == "ru") {
				b2 = b1;
				b1 = 2;
			} else if(s == "ld") {
				b2 = b1;
				b1 = 3;
			} else if(s == "rd") {
				b2 = b1;
				b1 = 4;
			}

			if((b1 == 1 && b2 == 2) || (b1 == 2 && b2 == 1) ||
				 (b1 == 3 && b2 == 4) || (b1 == 4 && b2 == 3))
				 	ans++;
		}
		cout << ans << endl;

	}


	return 0;
}