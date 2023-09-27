#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

int main() {
  int N,d,n,left,right,top,bottom;
  int pos[200][2];
  while(cin >> N) {
    if(N == 0) break;
    memset(pos,0,sizeof(pos));
    left = 0;right = 0;top = 0;bottom = 0;
    for(int i=1;i<N;i++) {
      cin >> n >> d;
      pos[i][0] = pos[n][0] + dx[d]; // x
      pos[i][1] = pos[n][1] + dy[d]; // y
      left = min(left,pos[i][0]);
      right = max(right,pos[i][0]);
      top = max(top,pos[i][1]);
      bottom = min(bottom,pos[i][1]);
    }
    cout << right - left + 1 << " " << top - bottom + 1 << endl;
  }
}