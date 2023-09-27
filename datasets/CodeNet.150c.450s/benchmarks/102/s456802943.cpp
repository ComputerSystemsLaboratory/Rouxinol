#include <iostream>
#include <queue>
#include <utility>
using namespace std;

const int dx[] = {1,0,-1,0};
const int dy[] = {0,-1,0,1};
queue<pair<int,int> > M;
int W,H;
int q[20+5][20+5] = {};	
char p[20+5][20+5];
int counter;
int x,y;

int main() {
	while(cin >> W >> H && W != 0){
		counter = 0;
		for (int i = 1; i <= 22; i++){
			for (int j = 1; j <= 22; j++){
					q[i][j] = 0;
					p[i][j] = ' ';
				
			}
		}
		for (int i = 1; i <= H; i++){
			for (int j = 1; j <= W; j++){
				cin >> p[i][j];
				if (p[i][j] == '@' ){
					M.push(make_pair(i,j));
					counter = 1;
					q[i][j] = 1;
				}
			}
		}
		while(!M.empty()){
			x = M.front().first;
			y = M.front().second;
			M.pop();
			for (int k = 0; k <= 3; k++)
			{		
				if (p[x+dx[k]][y+dy[k]] == '.' && q[x+dx[k]][y+dy[k]] == 0)
				{
					M.push(make_pair(x+dx[k], y+dy[k]));
					q[x+dx[k]][y+dy[k]] = 1;
					counter += 1;
				}
			}
		}
		cout << counter << endl;
	}
}