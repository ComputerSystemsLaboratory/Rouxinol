#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define int ll

#define FOR(i,a,b) for(int i=int(a);i<int(b);i++)
#define REP(i,b) FOR(i,0,b)

int W,H;
char data[30][30];
bool come[30][30];
int human_h,human_w;

int read(){
	int i;
	scanf("%lld",&i);
	return i;
}

int canGo(int w,int h){
	if(w < 0 || h < 0 || w >= W || h >= H) return 0;
	if(data[h][w] == '#') return 0;
	if(come[h][w]) return 0;
	come[h][w] = true;
	int ret = 1;
	ret += canGo(w+1,h);
	ret += canGo(w-1,h);
	ret += canGo(w,h+1);
	ret += canGo(w,h-1);
	return ret;
}

signed main(){
	// your code goes here
	while(true){
		W=read(),H=read();
		if(W==0 || H==0) break;
		REP(i,H){
			REP(j,W){
				come[i][j] = false;
				cin >> data[i][j];
				if(data[i][j] == '@'){
					human_h = i;
					human_w = j;
				}
			}
		}
		cout <<	canGo(human_w,human_h) << endl;
	}

}