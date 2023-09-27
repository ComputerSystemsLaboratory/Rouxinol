#include<iostream>
#include<string>
using namespace std;

int main(){
  int map[21][21];
  int dx,dy;
  int get;
  int n,m;
  int x,y;
  int len;
  int i,j;

  string A;

  while(1){
    get = 0;
    dx = 10;
    dy = 10;
    for(i = 0 ; i < 21 ; i++){
      for(j = 0 ; j < 21 ; j++){
	map[i][j]=0;
      }
    }
    cin >> n;
    if(n==0) break;
    for(i = 0 ; i < n ; i++){
      cin >> x >> y;
      map[x][y]=1;
    }
 
    cin >> m;
    for(i = 0 ; i < m ; i++){
      cin >> A >> len;
      if(A == "N"){
	for(j = 0 ; j < len ; j++){
	  dy++;
	  if(map[dx][dy]==1){
	    map[dx][dy]=0;
	    get++;
	  }
	}
      }

      if(A == "E"){
	for(j = 0 ; j < len ; j++){
	  dx++;
	  if(map[dx][dy]==1){
	    map[dx][dy]=0;
	    get++;
	  }
	}
      }
      if(A == "S"){
	for(j = 0 ; j < len ; j++){
	  dy--;
	  if(map[dx][dy]==1){
	    map[dx][dy]=0;
	    get++;
	  }
	}
      }

      if(A == "W"){
	for(j = 0 ; j < len ; j++){
	  dx--;
	  if(map[dx][dy]==1){
	    map[dx][dy]=0;
	    get++;
	  }
	}
      }

    }

    if(get == n){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }

  return 0;
}