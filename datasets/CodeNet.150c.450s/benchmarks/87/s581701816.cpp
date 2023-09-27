#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<list>
using namespace std;
int inf = 1000000000;

int main(void) {
  int h;
  while(cin >> h){
    if( h == 0 ) break;

    vector< vector<int> > b(h, vector<int>(5));
    for(int i=0; i<h; i++){
      for(int j=0; j<5; j++) cin >> b[i][j];
    }
    vector< vector<int> > x = b;

    int score = 0;
    while(true){
      for(int i=0; i<h; i++){
        vector<bool> a(5, false);
        for(int j=0; j<3; j++){
          if( b[i][j] == -1 ) continue;
          if( b[i][j] == b[i][j+1] && b[i][j+1] == b[i][j+2] ){
            a[j] = true;
            a[j+1] = true;
            a[j+2] = true;
          }
        }
        for(int j=0; j<5; j++){
          if( a[j] ){
            score += b[i][j];
            b[i][j] = -1;
          }
        }
      }

      for(int j=0; j<5; j++){
        for(int i=0; i<h; i++){
          if(b[i][j] == -1){
            for(int k=i; k>=1; k--){
              b[k][j] = b[k-1][j];
            }
            b[0][j] = -1;
          }
        }
      }
      // cerr << score << endl;
      // for(int i=0; i<h; i++){
      //   for(int j=0; j<5; j++){
      //     cerr << b[i][j] << " ";
      //   }
      //   cerr << endl;
      // }

      if( x == b ) break;
      x = b;
    }
    cout << score << endl;
  }

  return 0;
}

// EOF