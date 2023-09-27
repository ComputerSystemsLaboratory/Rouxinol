#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std; 

typedef long long ll;
typedef pair<int, int> P;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
 
char field[103][103];
int h, w;

void bfs(int y, int x, char fruit){
    if( x<0 || x>=w || y<0 || y>=h || fruit != field[y][x] || field[y][x] == 'a'){
        return;
    }
    field[y][x] = 'a';

    for(int i=0; i<4; i++){
        bfs(y+dy[i], x+dx[i], fruit);
    }
}

int main(void){
    while(cin >> h >> w && h+w!=0){
    	int ans=0;
	    for(int i=0; i<h; i++){
	        for(int j=0; j<w; j++){
	            cin >> field[i][j];
	        }
	    }
	    for(int i=0; i<h; i++){
	        for(int j=0; j<w; j++){
	            if(field[i][j] != 'a'){
	                bfs(i,j,field[i][j]);
	                ans++;
	            }
	        }
	    }
	    cout << ans << endl;
    }
    return 0;
}