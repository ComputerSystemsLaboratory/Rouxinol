#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <map>

using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};
bool gems[25][25];
vector<bool> hantei;
int main(){
	int n;
	cin >> n;
	while(n!=0){
		REP(i,25)memset(gems[i],0,sizeof(gems[i]));
		REP(i,n){
			int x,y;
			cin >> x >> y;
			gems[x][y] = true;
		}
		int ret=0;
		int m;
		cin >> m;
		int nowx,nowy;
		nowx = nowy = 10;
		REP(i,m){
			char c;
			int nor;
			cin >> c >> nor;
			int dir;
			switch(c){
				case 'N':
					dir = 0;
					break;
				case 'E':
					dir = 1;
					break;
				case 'S':
					dir = 2;
					break;
				case 'W':
					dir = 3;
					break;
			}

			REP(j,nor){
				nowx += dx[dir];
				nowy += dy[dir];
				if(gems[nowx][nowy]){
					ret++;
					gems[nowx][nowy] = false;
				}
			}
		}
		if(ret == n){
			hantei.push_back(1);
		}else{
			hantei.push_back(0);
		}
		cin >> n;
	}
	REP(i,hantei.size()){
		string dis = hantei[i] ? "Yes":"No";
		cout << dis << endl;
	}
	return 0;
}