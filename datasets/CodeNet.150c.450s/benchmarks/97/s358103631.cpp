#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <queue>
#include <stack>
#include <map>
#include <set>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) string((s).rbegin(), (s).rend())
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef long long int ll;
typedef pair<int, int> P;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int main(){

	while(1){
		int n;
		cin >> n;
		if(!n) break;
		vector<P> r(n);

		r[0] = MP(0, 0);
		FOR(i, 1, n){
			int num, d;
			cin >> num >> d;

			P p = r[num];

			r[i].X = p.X + dx[d];
			r[i].Y = p.Y + dy[d];
		}

		int left = 0, bottom = 0, top = 0, right = 0;

		rep(i, n){
			left = min(left, r[i].X);
			bottom = min(bottom, r[i].Y);
			right = max(right, r[i].X);
			top = max(top, r[i].Y);
		}
		//cout << "***";
		cout << (right - left)+1 << ' ' << (top - bottom)+1 << endl;
	}

	return 0;
}