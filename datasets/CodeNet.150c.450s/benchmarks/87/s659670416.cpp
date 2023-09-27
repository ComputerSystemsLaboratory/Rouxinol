#include<iostream>
#include<vector>
#include<algorithm>
#include <iterator>
#include<queue>
#include <functional>
#include <string>
#include <numeric>
using namespace std;

int DelCheck(vector<int> &Line, bool &flag){
  int a = 0, score = 0;
  if (Line[2] == 0)return 0;
  if (Line[a] == Line[a + 1]){
    if (Line[a + 1] == Line[a + 2]){
      if (Line[a + 2] == Line[a + 3]){
        if (Line[a + 3] == Line[a + 4]){
          score = accumulate(Line.begin(), Line.end(), 0);
          fill(Line.begin(), Line.end(), 0);
          flag = true;
          return score;
        }
        else{
          score = accumulate(Line.begin(), Line.end() - 1, 0);
          fill(Line.begin(), Line.end() - 1, 0);
          flag = true;
          return score;
        }
      }
      else{
        score = accumulate(Line.begin(), Line.end() - 2, 0);
        fill(Line.begin(), Line.end() - 2, 0);
        flag = true;
        return score;
      }
    }
  }
  if (Line[a + 1] == Line[a + 2]){
    if (Line[a + 2] == Line[a + 3]){
      if (Line[a + 3] == Line[a + 4]){
        score = accumulate(Line.begin() + 1, Line.end(), 0);
        fill(Line.begin() + 1, Line.end(), 0);
        flag = true;
        return score;
      }
      else{
        score = accumulate(Line.begin() + 1, Line.end() - 1, 0);
        fill(Line.begin() + 1, Line.end() - 1, 0);
        flag = true;
        return score;
      }
    }
  }
  if (Line[a + 2] == Line[a + 3]){
    if (Line[a + 3] == Line[a + 4]){
      score = accumulate(Line.begin() + 2, Line.end(), 0);
      fill(Line.begin() + 2, Line.end(), 0);
      flag = true;
      return score;
    }
  }
  return 0;
  
}

int main(){
  while (1){
    int n;
    int Total=0;
    cin >> n;
    if (!n)return 0;
    vector<vector<int>> Field(n);
    for (int i = 0; i < n; ++i){
      
      int a, b, c, d, e;
      cin >> a >> b >> c >> d >> e;
      Field[i].push_back(a); Field[i].push_back(b);
      Field[i].push_back(c); Field[i].push_back(d);
      Field[i].push_back(e);
    }
    bool flag = true;
    while (flag){
      flag = false;
      for (int i = 0; i < n; ++i){
        Total += DelCheck(Field[i],flag);
      }
      for (int i = n-1; i >=0; --i){
        for (int j = 0; j < 5; ++j){
          for (int l = 0; l < n-1+1; ++l){
            if (Field[i][j] == 0){
              for (int k = i; k >0; --k){
                Field[k][j] = Field[k-1][j];
                Field[k - 1][j] = 0;
              }
            }
          }
        }
      }
    }
    cout << Total << endl;
  }
  return 0;
}