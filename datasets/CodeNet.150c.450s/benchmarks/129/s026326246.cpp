#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int r, c;
  cin >> c >> r;
  vector<vector<int> >v(c+1, vector<int>(r+1));

  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      cin >> v[i][j];
    }
    int sum = 0;
    for(int j=0;j<r;j++){
      sum += v[i][j];
    }
    v[i][r] = sum;
  }

  for(int i=0;i<r+1;i++){
    int sum = 0;
    for(int j=0;j<c;j++){
      sum += v[j][i];
    }
    v[c][i] = sum;
  }

  for(int i=0;i<c+1;i++){
    for(int j=0;j<r+1;j++){
      cout << v[i][j];
      if(j!=r)cout << " ";
    }
    cout << endl;
  }
  return 0;
}