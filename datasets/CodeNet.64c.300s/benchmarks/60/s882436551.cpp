#include <iostream>

using namespace std;

#define FOR(a, b) for(int a = 0; a < b; ++a)

int vx[4] = {0, 1, 0, -1};
int vy[4] = {-1, 0, 1, 0};
int a, b, m;
int map[16][16] = {0};
bool chk[16][16] = {false};

void froot(int x, int y){
  FOR(i, 2){
    int nx = x + vx[i + 1];
    int ny = y + vy[i + 1];
    if(map[y][x] == 2){
      ++m;
      return;
    } else if(nx >= 0 && nx < a && ny >= 0 && ny < b && !chk[ny][nx] && map[ny][nx] != 3){
      chk[ny][nx] = true;
      froot(nx, ny);
      chk[ny][nx] = false;
    } 
  }
}

int main(){

  int n, x, y;

  while(1){

    cin >> a >> b;

    if(!a && !b)break;
    
    cin >> n;
    
    m = 0;
    FOR(i, b){
      FOR(j, a){
	map[i][j] = 0;
	chk[i][j] = false;
      }
    }
    map[0][0] = 1;
    map[b-1][a-1] = 2;
    
    FOR(i, n){
      cin >> x >> y;
      map[y - 1][x - 1] = 3;
    }

    froot(0, 0);
    
    cout << m << endl;

  }
  
  return 0;
}