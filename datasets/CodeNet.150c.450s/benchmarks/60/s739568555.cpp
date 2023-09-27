#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<climits>
#include<ctime>
#include<cstring>
#include<sstream>
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define ALL(c) (c).begin(), (c).end()
#define dump(a) cerr << #a << "=" << (a) << endl
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

bool graph[101][101];

int main() {
	int N;	
	int id,node_size,neighber;
	cin >> N;

	rep(y,N) {
		rep(x,N) {
			graph[y][x] = 0;
		}
	}

	rep(i,N) {
		cin >> id >> node_size;
		rep(j,node_size) {
			cin >> neighber;
			graph[id][neighber] = 1;	
		}
	}

	REP(y,1,N+1) {
		REP(x,1,N+1) {
			cout << graph[y][x];
			if (x != N) {
				cout << " ";
			}
		}
		cout << endl;
	}

	return EXIT_SUCCESS;
}