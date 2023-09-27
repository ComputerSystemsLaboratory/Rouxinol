#include <iostream>
#include <algorithm>
#define MAX_INT  100005
using namespace std;

//??\???????????§???
#define MAX_X  22
#define MAX_Y  22

//?????°
char field[MAX_X][MAX_Y];
int X, Y;
int px, py;                     // players position


//?§????4?????????????????????
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1,  0, -1};


void initialize_field() {
  for (int y = 0; y < Y; y++ ) {
    for (int x = 0; x < X; x++ ) {
      field[x][y] = '#';
    }
  }
}

void print_field() {
  for (int y = 0; y < Y; y++ ) {
    for (int x = 0; x < X; x++ ) {
      cout << field[x][y];
    }
    cout << endl;
  }
  cout << endl;
}


void dfs(int x, int y) {

  field[x][y] = '$';            // ?¨????????????¨?????°

  for (int i = 0; i < 4; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];

    if(field[nx][ny] == '.') {
      dfs(nx, ny);
    }
  }

}


int main() {

  while(true) {

    initialize_field();

    cin >> X >> Y;

    if(X == 0 && Y == 0) break;

    for(int y = 0; y < Y; y++ ){
      for(int x = 0; x < X; x++ ){
        cin >> field[x][y];
        if( field[x][y] == '@' ) { px = x; py = y; }
      }
    }

    dfs(px, py);

    // ?¨?????????´????????°??????
    int res = 0;
    for(int y = 0; y < Y; y++ ){
      for(int x = 0; x < X; x++ ){
        if ( field[x][y] == '$' ) { res++; }
      }
    }
    cout << res << endl;
  }

  return 0;

}