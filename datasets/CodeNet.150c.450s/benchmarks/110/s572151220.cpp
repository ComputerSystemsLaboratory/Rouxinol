#include <iostream>
#include <queue>
#include <string>

using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int First = 1000;
int w,h,n;
int ans = 0;
int d[1001][1001];
typedef struct p{
	int x, y;
}P;
string mapp[1001];
P nezumi[11];


//幅優先探索を行う
void bfs(){
	for(int i=1 ; i <= n ; i++ ){
		P sp = nezumi[i-1];
		int sx = nezumi[i-1].x;
		int sy = nezumi[i-1].y;
		int gx = nezumi[i].x;
		int gy = nezumi[i].y;

		//二次元配列の初期化をする
		for(int y=0 ; y < h ; y++ ){
			for(int x=0 ; x < w ; x++ ){
				d[y][x] = First;
			}
		}
		
		queue<P> q;
		q.push( sp );
		d[sy][sx] = 0;
		while( !q.empty() ){
			P now = q.front();
			q.pop();
			int x = now.x;
			int y = now.y;

			if( x == gx && y == gy ){
				ans += d[gy][gx];

				/*動作確認
				cout << "\n";
				for(int y=0 ; y < h ; y++ ){
					for(int x=0 ; x < w ; x++ ){
						if (d[y][x]==First){cout << "X";}
							else{cout << d[y][x];}
					}
					cout << "\n";
				}*/
				break;
			}

			//redandblackと同じように探索
			for(int i=0 ; i < 4 ; i++ ){
				int newx = x + dx[i];
				int newy = y + dy[i];
				if( newx < 0 || newy < 0 || newx >= w || newy >= h ) continue;
				if( mapp[newy][newx] != 'X' ){
					P next;
					next.x = newx;
					next.y = newy;
					if( d[newy][newx] == First ){
						d[newy][newx] = d[y][x] + 1;
						q.push( next );
					}
				}
			}
		}
	}
}

int main(){
	//標準入力
	cin >> h >> w >> n;
	for(int y=0 ; y < h ; y++ ){
		cin >> mapp[y];
	}
	
	//スタートと数字の確認
	for(int y=0 ; y < h ; y++ ){
		for(int x=0 ; x < w ; x++ ){
			char c = mapp[y][x];

			//アスキー使っていい感じにしてみる
			if( c >= '1' && c <= '9' ){
				nezumi[ c - '0' ].x = x;
				nezumi[ c - '0' ].y = y;
			}
			if(c == 'S'){
				nezumi[0].x = x;
				nezumi[0].y = y;
			}
		}
	}
	bfs();
	cout << ans << endl;
}