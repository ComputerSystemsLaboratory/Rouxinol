#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (int) (l);i < (int) (r);i++)
#define ALL(x) x.begin(),x.end()
template<typename T> bool chmax(T& a,const T& b){ return a < b ? (a = b,true) : false; }
template<typename T> bool chmin(T& a,const T& b){ return b < a ? (a = b,true) : false; }
typedef long long ll;

int H,W,N;
vector<string> S;
struct P{
	int y,x,c;
};
const int dx [] = {0,1,0,-1};
const int dy [] = {-1,0,1,0};

bool in_range(int y,int x)
{
	return y >= 0 && y < H && x >= 0 && x < W;
}

int bfs(char s,char t)
{
	queue<P> q;
	deque<bool> vis(H * W);
	FOR(i,0,H) FOR(j,0,W){
		if(S [i] [j] == s){
			q.push(P{i,j,0});
			vis [i * W + j] = true;
		}
	}

	while(q.empty() == false){
		P f = q.front();
		q.pop();

		if(S [f.y] [f.x] == t) return f.c;
		FOR(i,0,4){
			int ny = f.y + dy [i],nx = f.x + dx [i];
			if(in_range(ny,nx) == false || S [ny] [nx] == 'X' || vis [ny * W + nx]) continue;
			vis [ny * W + nx] = true;
			q.push(P{ny,nx,f.c + 1});
		}
	}
	return -1;
}

int main()
{
	cin >> H >> W >> N;
	S.assign(H,"");
	FOR(i,0,H){
		cin >> S [i];
	}

	int ans = bfs('S','1');
	FOR(i,2,N + 1){
		ans += bfs('0' + (i - 1),'0' + i);
	}

	cout << ans << endl;

	return 0;
}