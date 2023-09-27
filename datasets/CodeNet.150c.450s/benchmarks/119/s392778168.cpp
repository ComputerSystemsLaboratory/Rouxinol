
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int,int> pint;
typedef vector<int> vint;
typedef vector<pint> vpint;
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for (int i=(n)-1;i>=0;i--)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define REPS(i,f,n) for (int i=(f)-1;i>=(n);i--)
int dx[8] = {1, 0, 0, -1, 1, 1, -1, -1};
int dy[8] = {0, 1, -1, 0, 1, -1, 1, -1};

int board[51][51];
int w, h;

void slove(void){
	int cnt = 0;
	queue<pint> q;
	rep(i, h){
		rep(j, w){
			if (board[i][j] == 1){
				q.push(mp(i, j));
				cnt++;
				/*
				rep(k, h){
					rep(l, w){
						printf("%d", board[k][l]);
					}
					printf("\n");
				}
				*/
				while(!q.empty()){
					pint now = q.front(); q.pop();
					rep(i, 8){
						int nowy = now.fi + dy[i];
						int nowx = now.se + dx[i];
						if (0 <= nowy && nowy <= h - 1 && 0 <= nowx && nowx <= w - 1 && board[nowy][nowx] == 1){
							board[nowy][nowx] = 0;
							q.push(make_pair(nowy, nowx));
						}
					}
				}
			}
		}
	}

	printf("%d\n", cnt);
	return;
}

void scan(int w, int h){
	rep(i, h) rep(j, w) cin >> board[i][j];

	slove();
	return;
}

int main(void){
	rep(i, 1000){
		cin >> w >> h;

		if (w == 0) break;
		scan(w, h);
	}
	return 0;
}