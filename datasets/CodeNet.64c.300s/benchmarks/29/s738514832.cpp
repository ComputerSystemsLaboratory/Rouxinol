#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int e;
  while(cin >> e, e){
    int m = INF;
    for(int z = 0; z*z*z <= e; z++){
      for(int y = 0; y*y <= e - z*z*z; y++){
        int x = e - z*z*z - y*y;
        m = min(m, x + y + z);
      }
    }
    cout << m << endl;
  }
}