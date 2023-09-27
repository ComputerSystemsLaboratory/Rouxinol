#include <bits/stdc++.h>
using namespace std;

int h, w;
int flag[101][101];
char fe[101][101];
char flu[3] = {'#','@','*'};
int xdim[4] = {1,-1,0,0};
int ydim[4] = {0,0,1,-1};
char o = 'o';

void dfs(int x, int y){

  if(fe[y][x] == o) return;
  if(fe[y][x] == '#'){
    fe[y][x] = o;
    for(int i = 0; i < 4; i++){
      int nx = x + xdim[i], ny = y + ydim[i]; 
      if(fe[ny][nx] == '#' && nx >= 0 && nx < w && ny >= 0 && ny < h) dfs(nx,ny);
    }
  }
  else  if(fe[y][x] == '*'){
    fe[y][x] = o;
    for(int i = 0; i < 4; i++){
      int nx = x + xdim[i], ny = y + ydim[i]; 
      if(fe[ny][nx] == '*' && nx >= 0 && nx < w && ny >= 0 && ny < h) dfs(nx,ny);
    }
  }
  else if(fe[y][x] == '@'){
    fe[y][x] = o;
    for(int i = 0; i < 4; i++){
      int nx = x + xdim[i], ny = y + ydim[i]; 
      if(fe[ny][nx] == '@' && nx >= 0 && nx < w && ny >= 0 && ny < h) dfs(nx,ny);
    }
  }
}

int main(){

  while(cin >> h >> w && (h || w)){

    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
	cin >> fe[i][j];
      }
    }
    int cnt = 0;
    for(int l = 0; l < h; l++){
      for(int m = 0; m < w; m++){
	for(int i = 0; i < 3; i++){
	  if(fe[l][m] == flu[i]){
	    dfs(m,l);
	    cnt++;
	    /* for(int p = 0; p < h; p++){
	      for(int e = 0; e < w; e++){
		cout << fe[p][e];
	      }
	      cout << endl;
	    }
	    cout << endl;
	    */
	  }
	}
   
      }
     
    }
    cout << cnt << endl;

  }


  return 0;
}