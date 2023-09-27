#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1e+8;
// s[y][x] := (x,y) ツづ可つィツつ「ツづ?つ?づゥツ青ウツ陛サツ形ツづ個氾板債? ツ可スツづ?置ツつゥツづェツづ?つ「ツづ按つ「ツづ?つォツづ?1
int s[500][500];

int dx[4] = {-1, 0,+1, 0};
int dy[4] = { 0,+1, 0,-1};

// ツ渉可甘コツ可サ
void init(){
	for(int y=0 ; y < 500 ; y++ ){
		for(int x=0 ; x < 500 ; x++ ){
			s[y][x] = -1;
		}
	}
}

// ツ青ウツ陛サツ形 now ツづー ツ青ウツ陛サツ形 id ツづ個療猟づ可置ツつュ(ツ古シツつォ d)
void search(int id, int d, int now){
	for(int y=0 ; y < 500 ; y++ ){
		for(int x=0 ; x < 500 ; x++ ){
			if( s[y][x] == id ){
				int mx = x + dx[d];
				int my = y + dy[d];
				s[my][mx] = now;
				return;
			}
		}
	}
}

int main(){
	int N;
	while( cin >> N , N ){
		// ツ渉可甘コツ可サ
		init();
		
		// 0 ツ氾板づ個青ウツ陛サツ形ツづーツ置ツつュ
		s[250][250] = 0;
		for(int i=1 ; i < N ; i++ ){
			int n, d;
			cin >> n >> d;
			search( n , d , i );
		}
		int min_x, min_y, max_x, max_y;
		min_x = min_y = INF;
		max_x = max_y = 0;
		for(int y=0 ; y < 500 ; y++ ){
			for(int x=0 ; x < 500 ; x++ ){
				if( s[y][x] >= 0 ){
					max_x = max( max_x , x );
					max_y = max( max_y , y );
					min_x = min( min_x , x );
					min_y = min( min_y , y );
				}
			}
		}
		cout << (max_x - min_x + 1) << " " << (max_y - min_y + 1) << endl;
	}
}