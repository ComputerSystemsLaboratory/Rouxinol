#include <bits/stdc++.h>
using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

typedef long long LL;

int main(){
  int n,m,x,y,d,nx,ny;
  char c;
  while(1){
    cin >> n;
    if(n==0) return 0;
    vector<vector<int>> field(21,vector<int>(21,0));
    for(int i=0;i<n;i++){
      cin >> x >> y;
      field[y][x]=1;
    }
    cin >> m;
    nx=ny=10;
    for(int i=0;i<m;i++){
      cin >> c >> d;
      switch(c){
      case 'N':
        for(int i=1;i<=d;i++){
          if(field[ny+i][nx]){
            field[ny+i][nx]=0;
            n--;
          }
        }
        ny=ny+d;
        break;
      case 'E':
        for(int i=1;i<=d;i++){
          if(field[ny][nx+i]){
            field[ny][nx+i]=0;
            n--;
          }
        }
        nx=nx+d;
        break;
      case 'S':
        for(int i=1;i<=d;i++){
          if(field[ny-i][nx]){
            field[ny-i][nx]=0;
            n--;
          }
        }
        ny=ny-d;
        break;
      case 'W':
        for(int i=1;i<=d;i++){
          if(field[ny][nx-i]){
            field[ny][nx-i]=0;
            n--;
          }
        }
        nx=nx-d;
        break;
      }
    }
    if(n==0) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}

