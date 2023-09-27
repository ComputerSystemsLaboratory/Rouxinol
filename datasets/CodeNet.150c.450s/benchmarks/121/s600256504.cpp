#include<cstdio>
#include<algorithm>
#include<string.h>

using namespace std;


int W,H,res;
char l[105][105];
bool b[105][105];

void dfs(int h,int w){
  if(b[h][w]==false){
  b[h][w]=true;
  if(h-1>=0 && l[h][w]==l[h-1][w]) dfs(h-1,w);
  if(w-1>=0 && l[h][w]==l[h][w-1]) dfs(h,w-1);
  if(l[h][w]==l[h+1][w]) dfs(h+1,w);
  if(l[h][w]==l[h][w+1]) dfs(h,w+1);
  }
}
void solve(){
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(b[i][j]==false){
        dfs(i,j);
        res++;
      }
    }
  }
  printf("%d\n",res);
}



int main(){
  while(true){

    res=0;
    memset(l,0,sizeof(l));

    scanf("%d%d",&H,&W);
    if(H==0 && W==0) break;

    for(int i=0;i<H;i++)
      for(int j=0;j<W;j++)
        b[i][j]=false;


    for(int i=0;i<H;i++){
      scanf("%s",&l[i]);
    }

    solve();
  }

  return 0;
}