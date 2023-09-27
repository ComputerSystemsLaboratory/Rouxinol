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
int W,H;
vector<string> room;

int dfs(int y,int x){
	int res = 0;
	rep(i,4){
		if(y + DY[i] < 0 || y + DY[i] >= H || x + DX[i] < 0 || x + DX[i] >= W || room[y + DY[i]][x + DX[i]] == '#') continue;
		room[y + DY[i]][x + DX[i]] = '#';
		res++;
		res += dfs(y + DY[i],x + DX[i]);
	}
	return res;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

	int sy,sx,ans;

	while(1){
		cin >> W >> H;
		if(W == 0 && H == 0) break;
		room.resize(H);

		rep(i,H){
			string s;
			cin >> s;
			room[i] = s;
		}

		rep(i,H){
			rep(j,W){
				if(room[i][j] == '@'){
					sy = i;
					sx = j;
					room[i][j] = '#';
				}
			}
		}

		ans = dfs(sy,sx);

		cout << ans + 1 << endl;
	}

	return 0;
}