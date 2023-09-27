#include <iostream>
#include <vector>

using namespace std;

int main() {

  int N=1;
  int mm = 0;
  while(true){
    cin >> N;
    if(!N)return 0;
    mm++;
    vector<vector<int> > stage;
    for (int i = 0; i < 400; i++) {
      vector<int> tmp_stage;
      for (int j = 0; j < 400; j++) {
        tmp_stage.push_back(-1);
      }
      stage.push_back(tmp_stage);
    }
    stage[200][200] = 0;
    int max_x = 200,min_x = 200;
    int max_y = 200,min_y = 200;
    for (int i = 1; i < N; i++) {
      int n, d;
      cin >> n >> d;
      for (int j = 0; j < 400; j++) {
        for (int k = 0; k < 400; k++) {
          int x = j, y = k;
          if (stage[j][k] == n) {
            switch (d) {
            case 0: {
              x--;
            } break;
            case 1: {
              y++;
            } break;
            case 2: {
              x++;
            } break;
            case 3: {
              y--;
            } break;
            }
            stage[x][y] = i;
            if(x > max_x)max_x = x;
            if(x < min_x)min_x = x;
            if(y > max_y)max_y = y;
            if(y < min_y)min_y = y;
          }
        }
      }
    }
    cout << max_x - min_x + 1  << " " << max_y - min_y + 1  <<endl;
  }
}