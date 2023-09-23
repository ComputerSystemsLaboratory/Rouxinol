#include <iostream>
using namespace std;


int block[20][20];
int memo[20][20];

int W,H;
int f(int x,int y){
	if( x > W || y > H ) return 0;
	if( block[x][y] ) return 0;
	if( x == W && y == H ) return 1;
	
	if( memo[x][y] != -1 ) return memo[x][y];
	else{
		int ans = 0;
		ans += f(x+1,y);
		ans += f(x,y+1);
		memo[x][y] = ans;
		return ans;
	}
}
int main(){
	while( cin >> W >> H && W ){
		for(int i = 0 ; i < 20 ; i++){
			for(int j = 0 ; j < 20 ; j++){
					block[i][j] = false;
					memo[i][j] = -1;
			}
		}
		int N;
		cin >> N;
		for(int i = 0 ; i < N ; i++){
			int x,y;
			cin >> x >> y;
			block[x][y] = true;
		}
		
		cout << f(1,1) << endl;
	}
}