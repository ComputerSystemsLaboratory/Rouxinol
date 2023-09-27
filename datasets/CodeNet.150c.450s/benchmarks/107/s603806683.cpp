#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>
#include <set>
using namespace std;
#define rep(i,n) for(int i = 0; i < n ; i++)
#define pb push_back
static const int INF = (1 << 21);

int main (void) {
  string a,b;
  cin >> a >> b;

  int LD[a.size()+1][b.size()+1];
  rep(i,a.size()+1){
    LD[i][0] = i;
  }
  rep(j,b.size()+1){
    LD[0][j] = j;
  }

  for(int i = 1; i < a.size()+1; i ++){
    for(int j = 1; j < b.size()+1; j ++){
      if(a[i-1] == b[j-1]){
        LD[i][j] = LD[i-1][j-1];
      }else{
        LD[i][j] = min(LD[i-1][j]+1,min(LD[i][j-1]+1,LD[i-1][j-1]+1));
      }

    }
  }
/*
  rep(i,a.size()+1){
    rep(j,b.size()+1){
      cout << LD[i][j] << " " ;
    }
    cout << endl;
  }*/

  cout << LD[a.size()][b.size()] << endl;
  return 0;
}