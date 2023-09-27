/*
15 1
##@........##..
*/
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
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};

char board[21][21];
int w, h;
int x, y;// ?????¨?????????

void slove(void){
	int cnt = 0;
	queue<pint> q;
	q.push(make_pair(y, x));//?????¨????????????queue?????\??????

	while(!q.empty()){
		pint now = q.front(); q.pop();
		rep(i, 4){
			int nowy = now.fi + dy[i];
			int nowx = now.se + dx[i];
			if (0 <= nowy && nowy <= h - 1 && 0 <= nowx && nowx <= w - 1){
				if (board[nowy][nowx] == '.'){
					cnt++;
					board[nowy][nowx] = 0;
					//printf("board %c\n", board[nowy][nowx]);
					q.push(make_pair(nowy, nowx));
				}
			}
		}
		/*
		rep(i, h){
			rep(j, w){
				printf("%c", board[i][j]);
			}
			printf("\n");
		}
		*/
	}
	printf("%d\n", cnt + 1);//?§?????????´????????\??????
	return;
}

void scan(int w, int h){
	rep(i, h){
		rep(j, w){
			cin >> board[i][j];
			if (board[i][j] == '@'){
				y = i; x = j;
			}
		}
		getchar();
	}

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