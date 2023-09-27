#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef pair<int,int> PII;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int n;
LL memo[31];

LL solve(int cnt){
	if(cnt >= n) return cnt > n? 0 : memo[cnt] = cnt == n;
	if(memo[cnt] != -1) return memo[cnt];
	LL res1 = solve(cnt + 1);
	LL res2 = solve(cnt + 2);
	LL res3 = solve(cnt + 3);
	return memo[cnt] = res1 + res2 + res3;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	while(1){
		rep(i,31)
			memo[i] = -1;
		cin >> n;
		if(n == 0) break;
		LL ans = solve(0);
		ans = (ans + 10 - 1) / 10;
		ans = (ans + 365 - 1) / 365;
		cout << ans << endl;
	}

	return 0;
}