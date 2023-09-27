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

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int,int> pii;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int a,b,n;
vii memo(18,vi(18));

int solve(int x,int y,int cnt){
	int res1,res2;
	if(memo[y][x] != -1) return memo[y][x];
	if(x > a || y > b || cnt == a + b - 2) return memo[y][x] = x == a && y == b;
	res1 = memo[y][x] = solve(x,y + 1,cnt + 1);	//テ・ツ個療」ツ?ォティツ。ツ古」ツ?湘・ツ?エテ・ツ青?
	res2 = memo[y][x] = solve(x + 1,y,cnt + 1);	//テヲツ敖アテ」ツ?ォティツ。ツ古」ツ?湘・ツ?エテ・ツ青?
	return memo[y][x] = res1 + res2;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	while(1){
		rep(i,memo.size()){
			rep(j,memo[i].size())
				memo[i][j] = -1;
		}

		cin >> a >> b;
		if(a == 0 && b == 0) break;
		cin >> n;
		rep(i,n){
			int x,y;
			cin >> x >> y;
			memo[y][x] = 0;	
		}

		int ans = solve(1,1,0);

		cout << ans << endl;
	}

	return 0;
}