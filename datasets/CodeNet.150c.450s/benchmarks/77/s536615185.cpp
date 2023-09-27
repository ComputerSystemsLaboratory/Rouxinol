#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <queue>
#include <bitset>
#include <string>
using namespace std;

#define REP(i,n) for(int i=0; i<n; i++)
#define RPA(i,s,e) for(int i=s; i<=e; i++)
#define RPD(i,s,e) for(int i=s; i>=e; i--)
#define PB(a) push_back(a)
#define MP(i,s) make_pair(i,s)
#define SZ(a) (int)(a).size()
#define ALL(a) (a).begin(), (a).end()
#define PRT(a) cout << (a) << endl
#define PRT2(a,b) cout << (a) << " " << (b) << endl
#define PRT3(a,b,c) cout << (a) << " " << (b) << " " << (c) << endl

typedef vector<int> VI;
typedef long long LL;
typedef pair<int,int> P;

int n, m, x, y;
string dir;
int dist;
int field[21][21];

void coding() {
	while(scanf("%d", &n)!=EOF) {
		if(n == 0) break;
		memset(field, 0, sizeof(field));
		REP(i,n) {
			scanf("%d%d", &x, &y);
			field[x][y] = 1;
		}

		int cx = 10;
		int cy = 10;
		scanf("%d", &m);
		REP(i,m) {
			cin >> dir;
			cin >> dist;
			for(int d=0; d<dist; d++) {
				if(dir == "N") {
					cy++;
				} else if(dir == "S") {
					cy--;
				} else if(dir == "E") {
					cx++;
				} else if(dir == "W") {
					cx--;
				}

				if(field[cx][cy] == 1) {
					field[cx][cy] = 0;
				}
			}
		}

		bool ok = true;
		REP(i,20) {
			REP(j,20) {
				if(field[i][j] == 1) {
					ok = false;
				}
			}
		}
		printf("%s\n", ok ? "Yes" : "No");
	}
}

// #define _LOCAL_TEST

int main() {
#ifdef _LOCAL_TEST
	clock_t startTime = clock();
	freopen("a.in", "r", stdin);
#endif

	coding();

#ifdef _LOCAL_TEST
	clock_t elapsedTime = clock() - startTime;
	cout << endl;
	cout << (elapsedTime / 1000.0) << " sec elapsed." << endl;
	cout << "This is local test" << endl;
	cout << "Do not forget to comment out _LOCAL_TEST" << endl << endl;
#endif
}