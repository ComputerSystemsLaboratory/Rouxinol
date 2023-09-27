#ifndef _WIN32
#include<iostream>
#endif

using namespace std;
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<iomanip>
#include<stack>
#include<set>
#include<functional>
#include<map>

#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()

const int dr[] = { 0, 1, 0, -1 };
const int dc[] = { 1, 0, -1, 0 };
#define NN 1
#define EE 0
#define WW 2
#define SS 3
typedef pair<int, int> P;
int main(){
	int N,M;
	while (cin >> N, N){
		set<P> gem;
		string s; int cnt;
		int r = 10, c = 10;
		REP(i, N){
			int a, b;
			cin >> a >> b;
			gem.insert({ b, a });
		}
		cin >> M;
		REP(i, M){
			cin >> s >> cnt;
			int d;
			if (s == "N")d = NN;
			if (s == "W")d = WW;
			if (s == "E")d = EE;
			if (s == "S")d = SS;
			REP(_, cnt){
				r = r + dr[d];
				c = c + dc[d];
				if (gem.count({ r, c }))gem.erase({ r, c });
			}

		}
		if (gem.size())cout << "No" << endl;
		else cout << "Yes" << endl;
	}

	return 0;
}