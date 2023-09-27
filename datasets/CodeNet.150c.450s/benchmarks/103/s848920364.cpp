#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

typedef vector<int> vi;

int n, s;

//??????p????????¶ c???????????°??? sum????¨?
int dfs(int p, int c, int sum) {
	if (c == 10) return p == 0 && sum == s;
	
	return dfs(p - 1, c + 1, sum + c) + dfs(p, c + 1, sum);
}

int main() {
	while (true) {
		cin >> n >> s;
		if (!n && !s) break;
		
		cout << dfs(n, 0, 0) << endl;
	}
	return 0;
}