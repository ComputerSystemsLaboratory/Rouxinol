#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define nrep(i,n) for(int i=1;i<=(n);i++)
#define FST first
#define SEC second
using namespace std;

typedef pair <int,int> pxy;
#define WMAX 20
#define HMAX 20
int dd[5]={0,1,0,-1,0};
int W,H;

void print(char map[HMAX][WMAX]){
  putchar('\n');
  rep(i,H){
    rep(j,W){
      cout << map[i][j];
    }
    putchar('\n');
  }
}

int dfs(char map[HMAX][WMAX]){
  stack <pxy> s;
  int n=0;
  rep(i,H){
    if(n) break;
    rep(j,W){
      if(map[i][j]=='@'){
	s.push(pxy(j,i));
	n=1;
	break;
      }
    }
  }

  while(!s.empty()){
    int cx=s.top().FST, cy=s.top().SEC;
    s.pop();
    if(map[cy][cx]=='.')
      n++;
    map[cy][cx]='#';
    rep(r,4){
      int nx=cx+dd[r], ny=cy+dd[r+1];
      if(nx<0||W<=nx||ny<0||H<=ny||map[ny][nx]=='#')
	continue;
      s.push(pxy(nx,ny));
    }
  }
  return n;
}


int main(){
  for(;;){
    scanf("%d %d",&W,&H);
    if(!(W+H)) break;
    
    char map[HMAX][WMAX];
    rep(i,H){
      string s;
      cin >> s;
      strcpy(map[i],s.c_str());
    }
    printf("%d\n",dfs(map));
  }
}