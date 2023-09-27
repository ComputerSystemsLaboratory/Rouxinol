#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <map>
#include <climits>
using namespace std;

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define RREP(i,n) for(int i=(int)n-1; i>=0; i--)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define RFOR(i,c) for(__typeof((c).rbegin())i=(c).rbegin();i!=(c).rend();++i)
#define ALL(c) (c).begin(), (c).end()

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int> > pipii;
typedef vector<int> vi;
	int x, L;

map<vector<int>, int> Map;
vector<int> amax, amin;

int calc(vector<int> &amax, vector<int> &amin){
	int x = 0, y = 0;
	int bit = 1;
	RREP(i, L){
		x += amax[i] * bit;
		y += amin[i] * bit;
		bit *= 10;
	}
	return x - y;
}

void solve(vector<int> &a, int cnt){
//REP(i,L) cout << a[i]; cout << endl;
	if(Map.find(a) != Map.end()) {
		cout << Map[a] << " ";
		int y = 0;
		int bit = 1;
		RREP(i, L){
			y += a[i] * bit;
			bit *= 10;
		}
		cout << y << " ";
		cout << cnt - Map[a] << endl;
		return;
	}
	Map[a] = cnt;
	amax.resize(L);
	amin.resize(L);
	REP(i,L){
		amax[i] = a[i];
		amin[i] = a[i];
	}
	sort(ALL(amin));
	sort(ALL(amax), greater<int>());
/*
REP(i,L) cout << amax[i];cout << " - ";
REP(i,L) cout << amin[i];cout << endl;
*/
	int x = calc(amax, amin);
	vector<int> next(L);
	RREP(i, L){
		if(!x) next[i] = 0;
		next[i] = x%10;
		x /= 10;
	}
	return solve(next, cnt + 1);
}

int main(void){
	while(cin >> x >> L, x || L){
		Map.clear();
		vector<int> a(L);
		RREP(i,L){
			if(!x) a[i] = 0;
			a[i] = x%10;
			x /= 10;
		}
		solve(a, 0);
	}
	
	return 0;
}