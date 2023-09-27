#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

const int MAX_N = 1000000;

int N;
vint G[100];
int FLG[100];
int D[100];
int F[100];
const int NIL = -1;
int tt;

void dfs(int ii){

	tt++;
	D[ii] = tt;

	// cout << "reach " << ii << " " << tt << endl;

	rep(i, G[ii].size()){
		int to = G[ii][i];
		if (D[to] == NIL){
			dfs(to);
		}
	}

	tt++;
	F[ii] = tt;
	// cout << "back " << ii << " " << tt << endl;

}

void run_dfs(){
	rep(i, N){ D[i] = NIL; }
	int start = 0;
	tt = 0;
	rep(i, N){
		if (D[i] == NIL) dfs(i);
	}
}

int main() {

	cin >> N;
	rep(i, N){
		int id, n; cin >> id >> n; id--;
		rep(j, n){
			int id_to; cin >> id_to; id_to--;
			G[id].push_back(id_to);
		}
	}

	run_dfs();

	rep(i, N){
		cout << (i+1) << " " << D[i] << " " << F[i] << endl;
	}
}