#include <iostream>
#include <cstring>
using namespace std;

int n;
bool flg[22][22];

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main(){
  while(cin >> n, n){
    memset(flg, 0, sizeof(flg));
    for(int i = 0; i < n; i++){
      int x, y;
      cin >> x >> y;
      flg[x][y] = true;
    }

    int m;
    cin >> m;

    int x = 10;
    int y = 10;

    while(m--){
      char dch;
      int d;
      int k;
      cin >> dch >> k;

      if(dch == 'N') d = 0;
      if(dch == 'E') d = 1;
      if(dch == 'S') d = 2;
      if(dch == 'W') d = 3;

      for(int i = 0; i < k; i++){
        x += dx[d];
        y += dy[d];

        if(flg[x][y]){
          flg[x][y] = false;
          n--;
        }
      }
    }

    cout << (n == 0 ? "Yes" : "No") << endl;
  }
}