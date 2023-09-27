#include <bits/stdc++.h>

using namespace std;

int H,M,cnt=0;
char farm[100][100];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};


void dfs(int x, int y, char z){
  //check
  //printf("%d,%d,%c\n",x,y,z);
  //check
  farm[x][y]='.';
  for(int i=0;i<4;i++){
    if(x+dx[i]>=0 && x+dx[i]<H && y+dy[i]>=0 && y+dy[i]<M && farm[x+dx[i]][y+dy[i]]==z) dfs(x+dx[i],y+dy[i],z);
  }
  return ;
}

int main(){
  while(1){
  scanf("%d %d",&H,&M);
  if(H==0 && M==0) break;
  //printf("%d %d\n",H,M);

  for(int i=0;i<H;i++){
    cin >> farm[i];
  }



  //check
  /*for(int i=0;i<H;i++){
    for(int j=0;j<M;j++){
      printf("%c",farm[i][j]);
    }
    printf("\n");
  }*/
  //check
  cnt=0;

  for(int i=0;i<H;i++){
    for(int j=0;j<M;j++){
      if(farm[i][j]!='.'){
        cnt++;  dfs(i,j,farm[i][j]);
      }
    }
  }


  printf("%d\n",cnt);
}
  return 0;
}