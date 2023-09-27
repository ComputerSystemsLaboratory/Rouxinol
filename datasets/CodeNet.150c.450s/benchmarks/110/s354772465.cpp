#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
//#include <map>
#include <set>
#define INF (2000000000)
#define MOD (1000000007)
using namespace std;

typedef vector<int> VI;
typedef vector<int>::iterator VII;
typedef vector<double> VD;
typedef vector<double>::iterator VDI;
typedef pair<int, int> P;


typedef struct
{
	int i;
	int j;
	int hp;
} STATE;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

char map[1024][1024];
int H, W, N;
int si, sj, gi, gj;
int d[1024][1024][10];

int search()
{
	queue<STATE> que;
	
	for (int i = 1; i <= H; i++){
		for (int j = 1; j <= W; j++){
			for (int k = 0; k <= N; k++){
				d[i][j][k] = INF;
			}
		}
	}
	
	STATE tmp = {si, sj, 0};
	que.push(tmp);
	d[si][sj][0] = 0;
	
	while (que.size()){
		STATE st = que.front();
		que.pop();
		
//		printf("%d %d %d\n", st.i, st.j, st.hp);
		
//		if (st.hp == N) return (d[st.i][st.j][st.hp]);
		if (st.hp == N) break;
				
		for (int i = 0; i < 4; i++){
			int ni = st.i + dy[i];
			int nj = st.j + dx[i];
			int nhp = st.hp + (st.hp == map[ni][nj]);
			
			if (map[ni][nj] != 'X' && d[ni][nj][nhp] == INF){
				STATE tmp = {ni, nj, nhp};
				que.push(tmp);
				d[ni][nj][nhp] = d[st.i][st.j][st.hp] + 1;
			}
		}
	}
	
	return (d[gi][gj][N]);
}

int main()
{
	for (int i = 0; i < 1024; i++){
		for (int j = 0; j < 1024; j++){
			map[i][j] = 'X';
		}
	}
	
	scanf("%d %d %d", &H, &W, &N);
	for (int i = 1; i <= H; i++){
		for (int j = 1; j <= W; j++){
			scanf(" %c", &map[i][j]);
			
			if (map[i][j] == 'S'){
				si = i;
				sj = j;
			}
			if (map[i][j] == '0' + N){
				gi = i;
				gj = j;
			}
			if (map[i][j] >= '1' && map[i][j] <= '9'){
				map[i][j] -= '1';
			}
		}
	}
	
	printf("%d\n", search());
}