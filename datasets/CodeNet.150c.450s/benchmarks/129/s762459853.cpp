#include <iostream>
#include <vector>

using namespace std;

int main(){
  int r,c;
  vector< vector<int> > v;

  cin >> r >> c;
  v.resize(r+1);
  for( int i = 0; i < r+1; ++i){
    v[i].resize(c+1);
  }
  for( int i = 0; i < r; ++i){
    for( int j = 0; j < c; ++j){
      cin >> v[i][j];
    }
  }

  for( int i = 0; i < r; ++i){
    for( int j = 0; j < c; ++j){
      v[i][c] += v[i][j];
    }
  }

  for( int j = 0; j < c+1; ++j){
    for( int i = 0; i < r; ++i){
      v[r][j] += v[i][j];
    }
  }

  for( int i = 0; i < r+1; ++i){
    for( int j = 0; j < c+1; ++j){
      cout << v[i][j];
      if( j != c){
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}