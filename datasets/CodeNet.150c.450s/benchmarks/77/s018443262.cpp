#include <iostream>
using namespace std;
#define MAX 21

int main(){
  int n;

  while(cin >> n,n){
    int field[MAX][MAX]={{0}},a,b;
    while(n--){
      cin >> a >> b;
      field[a][b] = 1;
    }
    cin >> n;
    int x = 10 ,y = 10 , c = field[x][y],dis;  field[x][y] = 0;
    char order;
    const int dx[] = {-1,0,1,0} ,dy[] = {0,-1,0,1};
    int nx,ny;

    while(n--){
      cin >> order >> dis;
      for(int i = 0 ; i < dis ; i++){
	switch(order){
	case 'N':
	  nx = x + dx[3];
	  ny = y + dy[3];
	  y++;
	  break;
	case 'S':
	  nx = x + dx[1];
	  ny = y + dy[1];
	  y--;
	  break;
	case 'W':
	  nx = x + dx[0];
	  ny = y + dy[0];
	  x--;
	  break;
	case 'E':
	  nx = x + dx[2];
	  ny = y + dy[2];
	  x++;
	  break;
	}
	field[nx][ny] = 0;
      }
    }
    int cnt = 0;    
    for(int i = 0 ; i < 20 ; i++){
      for(int j = 0 ; j < 20 ; j++){
	if(field[i][j]) cnt++;
      }
    }
    if(cnt) cout << "No" << endl;
    else cout << "Yes" << endl;
  }

  return 0;
}
    