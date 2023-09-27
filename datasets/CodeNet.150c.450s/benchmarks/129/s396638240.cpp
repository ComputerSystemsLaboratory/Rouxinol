#include<cstdio>
#include<iostream>
using namespace std;

#define ll long long
#define rep(i,a,b) for(i=a;i<b;i++)
#define rep0(i,n) rep(i,0,n)
#define MD 1000000007

char sep[2] = {' ', '\n'};

int main() {
  int i, j, k, r, c;

  int cell[110][110];
  cin >> r >> c;
  rep0(i,r){
    cell[i][c] = 0;
    rep0(j,c) cin >> cell[i][j], cout << cell[i][j] << " ", cell[i][c] += cell[i][j];
    cout << cell[i][c] << endl;
  }
  rep0(j,c+1) {
    cell[r][j] = 0;
    rep0(i,r) cell[r][j] += cell[i][j];
    cout << cell[r][j] << sep[j == c];
  }
  cout << flush;


  return 0;
}
  