#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <climits>
#include <cassert>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e) != (s).end())
#define FOR(i,a,b) for(int i=(a); i<(b); ++i)
#define REP(i,n) FOR(i,0,n)

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
	int N;
	while(cin >> N, N) {
		vvi pos(N, vi(2, 0));
		pos[0][0] = pos[0][1] = 0;
		
		int n, d;
		FOR(i, 1, N) {
			cin >> n >> d;
			pos[i][0] = pos[n][0] + dx[d];
			pos[i][1] = pos[n][1] + dy[d];
		}

		int maxx = 0, minx = 0, maxy = 0, miny = 0;
		REP(i, N) {
			maxx = max(maxx, pos[i][0]);
			minx = min(minx, pos[i][0]);
			maxy = max(maxy, pos[i][1]);
			miny = min(miny, pos[i][1]);
		}

		int width = maxx-minx+1;
		int height = maxy-miny+1;

		cout << width << " " << height << endl;
	}
}