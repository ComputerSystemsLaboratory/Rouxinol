#include <iostream>
#include <algorithm>
using namespace std;
int n;
bool tbl[30][30];
int dx[200],dy[200];
int main(){
  dy['N'] = 1;
  dy['S'] = -1;
  dx['W'] = -1;
  dx['E'] = 1;
  
  while(cin>>n,n){
    for(int i=0;i<30;++i) for(int j=0;j<30;++j) tbl[i][j] = false;
    for(int i=0;i<n;++i){
      int x,y;
      cin >> x >> y;
      tbl[y][x]=true;
    }

    int m;cin>>m;
    int x=10,y=10;
    int cnt = 0;
    while(m--){
      int d;char c;
      cin >> c >> d;
      for(int i=0;i<d;++i){
	cnt+=tbl[y][x];
	tbl[y][x]=false;
	x +=dx[c];
	y +=dy[c];
      }
    }
    cnt+=tbl[y][x];
    if(cnt==n) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}