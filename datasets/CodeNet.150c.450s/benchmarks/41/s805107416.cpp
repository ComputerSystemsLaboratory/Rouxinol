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
static const ll INFTY = (1LL << 32);

int V, E;
ll A[100][100];

void warshallFloyd(){
	rep(k, V)
		rep(i, V)
		   rep(j, V)
	{
		if (A[i][k] != INFTY && A[k][j] != INFTY){
			A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
		}
	}
}

int main() {

	cin >> V >> E;

	rep(i, V) rep(j, V){
		A[i][j] = (i == j) ? 0 : INFTY;
	}

	rep(i, E){
		int s, t, d;
		cin >> s >> t >> d;
		A[s][t] = d;
	}

	warshallFloyd();

	rep(i, V){ if (A[i][i] < 0){ cout << "NEGATIVE CYCLE" << endl; return 0; } }

	rep(i, V){
		rep(j, V){
			if (A[i][j] == INFTY){
				cout << "INF";
			}
			else{
				cout << A[i][j];
			}
			if (j < V - 1){ cout << " "; }
		}
		cout << endl;
	}

}