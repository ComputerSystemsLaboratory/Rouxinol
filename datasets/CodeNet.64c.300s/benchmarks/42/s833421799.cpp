#include <iostream>
using namespace std;

int main(){

  while(1){
    int n,m;
    cin >> n;
    if(n==0) break;
    int map[25][25]={},ans=0;

    for(int i=0;i<n;++i){
      int x ,y;
      cin >> x >> y;
      map[y][x]=1;
    }
    cin >> m;
    int nx=10,ny=10;
    for(int i=0;i<m;++i){
      string s;
      int d,dx,dy;
      cin >> s >> d;
      if(s=="N"){
	dy=1;dx=0;
      }
      else if(s=="S"){
	dy=-1;dx=0;
      }
      else if(s=="E"){
	dy=0;dx=1;
      }
      else if(s=="W"){
	dy=0;dx=-1;
      }

      for(int j=0;j<d;j++){
	nx=nx+dx; ny=ny+dy;
	if(map[ny][nx] == 1){
	  ans++;
	  map[ny][nx] = 0;
	}
      }
    }
    if(ans == n)cout << "Yes" <<endl;
    else cout << "No" <<endl;


  }
  return 0;
}