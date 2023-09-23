#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int R, C;

  while(true){
    cin >> R >> C;

    if( R == 0 && C == 0 ) break;

    int field[R][C];

    for(int y = 0; y < R; y++){
      for(int x = 0; x < C; x++){
        cin >> field[y][x];
      }
    }

    int answer = 0;
    int n = 1 << R;
    int mask[R];
    for(int i = 0; i < n; i++){
      for(int j = 0; j < R; j++){
        mask[j] = i >> j & 1;
      }

      int result = 0;
      for(int x = 0; x < C; x++){
        int cnt = 0;
        for(int y = 0; y < R; y++){
          cnt += field[y][x] ^ mask[y];
        }
        result += max( cnt, R-cnt );
      }

      answer = max( answer, result );
    }

    cout << answer << endl;
  }

  return 0;
}