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
typedef pair<int,int> pii;
typedef long long ll;

#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int main()
{
	int n;
	while (cin >> n, n) {
		int seconds_in_a_day = 24 * 60 * 60 + 60 * 60 + 60;
		vi train(seconds_in_a_day, 0);
		REP(i, n) {
			int h, m, s; scanf("%d:%d:%d", &h, &m, &s);
			int departure_time = (h * 60 * 60) + (m * 60) + s;
			scanf("%d:%d:%d", &h, &m, &s);
			int arrival_time = (h * 60 * 60) + (m * 60) + s;
			FOR(t, departure_time, arrival_time) {
				++train[t];
			}
		}
		int ans = 0;
		REP(t, seconds_in_a_day) {
			ans = max(ans, train[t]);
		}
		cout << ans << endl;
	}
}