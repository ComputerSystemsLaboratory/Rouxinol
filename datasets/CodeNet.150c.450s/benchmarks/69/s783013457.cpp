#include <iostream>
#include <vector>
#include <string>

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
using namespace std; 

#define MAX 10

int N;
int in[MAX];
vector<string> vs;
string s;

void dfs(int l, int r, int cnt) {
	if(cnt == MAX) s = "YES";
	if(in[cnt] > l) dfs(in[cnt],r,cnt+1);
	if(in[cnt] > r) dfs(l,in[cnt],cnt+1);
}

void solve()
{
	s = "NO";
	dfs(0,0,0);
	vs.pb(s);
}

void input()
{
	cin >> N;
	rep(i,0,N) {
		rep(j,0,MAX) cin >> in[j];
		solve();
	}
}

int main(void)
{
	input();
	rep(i,0,vs.size()) cout << vs[i] << endl;
	return 0;
}