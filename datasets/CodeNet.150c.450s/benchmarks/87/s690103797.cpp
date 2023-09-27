#include <bits/stdc++.h>
using namespace std;
// void pfield(vector<vector<int> >, int);

int main() {
  int cols;
  while(cin >> cols, cols) {
    vector<vector<int> > field(5, vector<int>()); // [col][line]
    for(int il = 0; il < cols; ++il) {
      for(int ic = 0; ic < 5; ++ic) {
        int num;
        cin >> num;
        field[ic].push_back(num);
      }
    }
    for(int ic = 0; ic < 5; ++ic) {
      reverse(field[ic].begin(), field[ic].end());
    }
    int score = 0;
    int lastScore = 0;
    do {
      lastScore = score;
      // Top down scan
      for(int il = cols; il >= 0; --il) {
        int rowCnt = 0;
        int lastNum = -1;
        for(int ic = 0; ic < 5; ++ic) {
          if(field[ic].size() <= il) {
            rowCnt = 0;
            lastNum = -1;
            continue;
          }
          (field[ic][il] == lastNum) ? ++rowCnt : (rowCnt = 0);
          int eraseNum = lastNum;
          lastNum = field[ic][il];
          if(rowCnt == 2) {
            for(int dic = -2; dic <= 0; ++dic) {
              field[ic + dic].erase(field[ic + dic].begin() + il);
              score += eraseNum;
            }
          } else if(rowCnt > 2) {
            field[ic].erase(field[ic].begin() + il);
            score += eraseNum;
          }
        }
        // pfield(field, cols);
      }
    } while(score != lastScore);
    cout << score << endl;
  }
  return 0;
}