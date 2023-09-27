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
int AM[100][100];

int main() {

	cin >> N;
	rep(i, N){
		int id, D; 
		cin >> id >> D; id--;
		rep(j, D){
			int n; cin >> n; n--;
			G[id].push_back(n);
		}
	}

	rep(i, N) rep(j, N){
		AM[i][j] = 0;
	}
	rep(i, N){
		vint v = G[i]; 
		rep (j, v.size()){
			AM[i][v[j]] = 1;
		}
	}

	rep(i, N){
		rep(j, N){
			cout << AM[i][j];
			if (j == N - 1){ cout << "\n"; }
			else{ cout << " "; }
		}
	}
}