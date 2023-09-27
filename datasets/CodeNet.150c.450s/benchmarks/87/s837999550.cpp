#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void drop(vector<vector<int> > &field, int h){
  for(int i = 0; i < h; ++i){
    for(int j = h-1; j > 0; --j){
      for(int k = 0; k < 5; ++k){
        if(field[j][k] == 0){
           swap(field[j-1][k], field[j][k]);
        }
      }
    }
  }
}
int erase(vector<vector<int> > &field, int h){
  int ret = 0;
  for(int i = 0; i < h; ++i){
    for(int j = 0; j < 3; ++j){
      // search
      int len = 1;
      for(int k = j+1; k < 5; ++k){
        if(field[i][j] != field[i][k]){
          break;
        }
        ++len;          
        }
      if(len >= 3){
        ret += field[i][j] * len;
        for(int k = j; k < j + len; ++k){
          field[i][k] = 0;
        }
      }
    }
  }
  return ret;
}
int main(){
  int h;
  while(true){
    cin >> h;
    if(h == 0){
      break;
    }
    vector<vector<int> > field(h, vector<int>(5));
    for(int i = 0; i < h; ++i){
      for(int j = 0; j < 5; ++j){
        cin >> field[i][j];
      }
    }
    int ans = 0;
    while(true){
      int point = erase(field, h);
      if(point == 0){
        break;
      }
      ans += point;
      drop(field, h);
    }
    cout << ans << endl;
  }
}