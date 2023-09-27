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
int D[100];
const int NIL = -1;
int tt;

int main() {

	cin >> N;
	rep(i, N){
		int id, n; cin >> id >> n; id--;
		rep(j, n){
			int id_to; cin >> id_to; id_to--;
			G[id].push_back(id_to);
		}
	}

	rep(i, N){ D[i] = NIL; }

	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));

	while (!q.empty()){

		pair<int, int> p = q.front(); q.pop();
		int i = p.first;
		int d = p.second;

		if (D[i] != NIL) continue; // prevent second visit

		D[i] = d;
		vint v = G[i];
		for (auto &j : v)
		{
			if (D[j] == NIL) { q.push(make_pair(j, d + 1)); }
		}
	}

	rep(i, N){
		cout << (i + 1) << " " << D[i] << endl;
	}
}