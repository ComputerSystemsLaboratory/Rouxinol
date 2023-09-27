#include <stdio.h>
#include <queue>
using namespace std;
int d[1000][1000], sx, sy;
char s[1000][1000];
int h,w,n;
int k, l;

int bfs(int,int,int,int);

int main(){
  int result = 0;
  int x[10], y[10], v;
  scanf("%d %d %d", &h, &w, &n);
  for(k = 0 ; k < h ; k++){
      scanf("%s",s[k]);
    }
  for( k = 0 ; k < h ; k++ ){
    for( l = 0 ; l < w ; l++){
      if(s[k][l] == 'S'){
	x[0] = l; y[0] = k;
      }
      if('1' <= s[k][l] && s[k][l] <= '9'){
	v = s[k][l]-'1'+1;
	x[v] = l; y[v] = k;
      }
    }
  }
  for (k = 1 ; k <= n ; k++){
   
    result += bfs(x[k-1],y[k-1],x[k],y[k]);
  }
  printf("%d\n", result);
  return 0;
}

int bfs(int sx, int sy, int gx, int gy){
  queue<int> Q;
  int i, j;
  int dx[4]={0, 1, 0, -1};
  int dy[4]={1, 0, -1, 0};
  

  for( i =  0 ; i < h ; i++ ){
    for( j = 0 ; j < w ; j++ ){
      d[i][j] = 1000000;
    }
  }

  Q.push(sy*w+sx);
  d[sy][sx]=0; /*スタート地点の初期化*/

  while( !Q.empty() ){
    int u = Q.front(); Q.pop();
    int pi = u/w;
    int pj = u%w;
    if( pi == gy && pj == gx )return d[gy][gx];
    for ( int r = 0; r < 4; r++ ){
      int ni = pi + dy[r];
      int nj = pj + dx[r];
      if ( ni < 0 || nj < 0 || ni >= h || nj >= w ) continue;
      if ( s[ni][nj] == 'X' ) continue;
      if( d[ni][nj] > d[pi][pj]+1 ){
      d[ni][nj] = d[pi][pj] + 1;
      Q.push( ni * w + nj );
      }

    }


  }
  //  printf("%d\n",u);
  return -1;
}