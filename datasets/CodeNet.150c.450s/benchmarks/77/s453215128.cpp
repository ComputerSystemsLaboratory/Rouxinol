#include <iostream>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;

int main(){
  while(1){
    int N;
    cin >> N;
    if(N==0) break;
    int x,y,map[100][100]={};
    rep(i,N){
      cin >> x >> y;
      map[y][x] = 1;
    }
    int Rx = 10,Ry = 10,tr = 0;
    int M;
    cin >> M;
    rep(i,M){
      string v;
      int d;
      cin >> v >> d;
      if(v == "N"){
	rep(j,d){ 
	  Ry++;
	  if( map[Ry][Rx] == 1){
	    tr += map[Ry][Rx];
	    map[Ry][Rx]--;
	  }
	}
      }
      else if(v == "E"){
	rep(j,d){ 
	  Rx++;
	  if( map[Ry][Rx] == 1){
	    tr += map[Ry][Rx];
	    map[Ry][Rx]--;
	  }
	}
      }
      else if(v == "S"){
	rep(j,d){ 
	  Ry--;
	  if( map[Ry][Rx] == 1){
	    tr += map[Ry][Rx];
	    map[Ry][Rx]--;
	  }

	}
      }
      else if(v == "W"){
	rep(j,d){ 
	  Rx--;
	  if( map[Ry][Rx] == 1){
	    tr += map[Ry][Rx];
	    map[Ry][Rx]--;
	  }

	}
      }
    }
    if(tr == N) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}