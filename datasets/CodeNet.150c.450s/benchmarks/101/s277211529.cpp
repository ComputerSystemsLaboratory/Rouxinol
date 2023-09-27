#include<iostream>
#include<climits>
#include<vector>
#include<list>
#include<functional>
#include<algorithm>
#include<string>
#include<cmath>
#include<complex>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<tuple>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define INF (int)1e9
#define INFL (ll)1e11
using namespace std;
typedef long long ll;

typedef pair<int, int> P;

vector<vector<int>> a(100000);
vector<int> comp(100000, 0);

void dfs(int s, int id) {
	stack<int> st;
	st.push(s);
	comp[s] = id;
	while (!st.empty()) {
		int i = st.top();
		int k = a[i].size();
		REP(j, k + 1) {
			if (j < k) {
				int t = a[i][j];
				if (comp[t] != id) {
					comp[t] = id;
					st.push(t);
					break;
				}
			}
			else st.pop();
		}
	}
}

void divide(int size) {
	int s = 0;
	int id = 1;
	while (1) {
		dfs(s, id);
		while (s < size && comp[s]>0) s++;
		if (s == size) break;
		id++;
	}
	return;
}

int main() {
	//cin.tie(0);
	//ios::sync_with_stdio(false);

	int n, m;
	scanf("%d %d", &n, &m);
	//cin >> n >> m;
	REP(i, m) {
		int s, t;
		scanf("%d %d", &s, &t);
		//cin >> s >> t;
		a[s].push_back(t);
		a[t].push_back(s);
	}
	int q;
	cin >> q;
	divide(n);
	REP(i, q) {
		int s, t;
		scanf("%d %d", &s, &t);
		//cin >> s >> t;
		if (comp[s] == comp[t]) printf("yes\n");
		else printf("no\n");
	}

	return 0;
}




