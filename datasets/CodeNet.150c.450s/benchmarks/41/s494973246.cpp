#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<sstream>
#include<iterator>
#include<list>
using namespace std;
typedef  long long int lint;
//typedef pair<int, int> IP;
typedef pair<lint, lint> LLP;
typedef pair<char, char>CP;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define sort(v) sort((v).begin(), (v).end())
#define reverse(v) reverse((v).begin(), (v).end())
#define upper(v,hoge) upper_bound(v.begin(),v.end(),hoge)
#define lower(v,hoge) lower_bound(v.begin(),v.end(),hoge)
#define llower(v,hoge) *lower_bound(v.begin(), v.end(), hoge)
#define lupper(v,hoge) *upper_bound(v.begin(), v.end(), hoge)
#define mp make_pair
#define P pair<int,int>
//#define int long long

#define INF 1000000000000000000

int main() {
	lint V, E;
	cin >> V >> E;
	vector<vector<lint>>G(V, vector<lint>(V));
	rep(i, V) {
		rep(j, V) {
			if (i != j) {
				G[i][j] = INF;
			}
		}
	}
	rep(i, E) {
		lint s, t, d;
		cin >> s >> t >> d;
		G[s][t] = d;
	}
	for (int k = 0; k < V; k++) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
			}
		}
	}
	rep(i, V) {
		if (G[i][i] != 0) {
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	}
	rep(i, V) {
		rep(j, V) {
			if (G[i][j] >= INF/100) {
				cout << "INF";
			}
			else {
				cout << G[i][j];
			}
			if (j == V - 1) {
				cout << endl;
			}
			else {
				cout << ' ';
			}
		}
	}
}
