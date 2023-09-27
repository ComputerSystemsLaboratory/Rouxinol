#define REP(i,n) for (int i=0;i<(n);i++)
#include <queue>
#include <iostream>
using namespace std;
const int MAX = 1000;
const int INF = 10000;
typedef pair<int,int> P; //??§?¨??????????

int N,M,c_num;
int sx,sy;
int gx,gy;
P C[9];
char field[MAX][MAX+1]; //field
int d[MAX][MAX+1]; //distance

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};


void init(){
    // cout << "init ..." << endl;
	REP(i,N){
		REP(j,M){
			if (! (i == sx && j == sy)) d[i][j] = INF;
		}
	}
	// cout << "start: " << d[sx][sy] << endl;
}


void bfs(){
    
    init();

	queue <P> que;
	que.push(P(sx,sy));

	while(que.size()){
		P p = que.front(); que.pop(); 

		if (p.first == gx && p.second == gy) break; 

		// ??¨???4??????????????????
		for(int r = 0; r < 4; r++) {
	    	int nx = p.first + dx[r], ny = p.second + dy[r]; 
	    	if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] != 'X' &&d[nx][ny] == INF){
	    		d[nx][ny] = d[p.first][p.second] + 1;
	    		que.push(P(nx,ny));
	    	}
		}
	}
	return ;
}


void solve(){
	REP(i,c_num){
		gx = C[i].first, gy = C[i].second;
		//cout <<???'goal :'<< gx << gy << endl;
		bfs();
		sx = gx, sy = gy;
	}
	cout << d[gx][gy] << endl;
}


int main(){
	cin >> N >> M >> c_num;
	REP(i,N){
		REP(j,M){
			cin >> field[i][j];
			if (field[i][j] == 'S') sx = i, sy = j;
			else if ('1' <= field[i][j] && field[i][j] <= '9'){
			    C [field[i][j]-'1'] = P(i,j);
			}
		}
	}
	solve();
}