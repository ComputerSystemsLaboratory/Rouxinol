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

int solve(int y, int m, int d){
	int yy = y, mm = m, dd = d;
	int ret = 0;
	while(1){
//cout << yy << ":" << mm << ":" << dd  << ":" << ret << endl;
		if(yy == 1000 && mm == 1 && dd == 1) break;
		dd++;
		ret++;
		if(yy % 3){
			if(mm % 2 && dd == 21){
				dd = 1; mm++;
			}
			else if(!(mm % 2) &&dd == 20){
				dd = 1; mm++;
			}
		}
		else {
			if(dd == 21){
				dd = 1; mm++;
			}
		}
		if(mm == 11){
			yy++;
			mm = 1;
		}
	}
	return ret;
}

int main(void){
	int n;
	cin >> n;
	while(n--){
		int y, m, d;
		cin >> y >> m >> d;
		cout << solve(y,m,d) << endl;
	}
	
	return 0;
}