#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int zahyo[16][16];

int main(){
  int x,y,a,b,c;
  while(1){
    memset(zahyo,-1,sizeof(int)*16*16);
    for(int i=0;i<16;i++){ zahyo[i][0]=1; zahyo[0][i]=1;}
  scanf("%d%d",&x,&y);
  if(x==0&&y==0) return 0;
  scanf("%d",&c);
  for(int i=0;i<c;i++){
    scanf("%d%d",&a,&b);
    zahyo[a-1][b-1]=0;
   if(b==1){for(int j=a-1;j<16;j++) zahyo[j][0]=0;}
   if(a==1){for(int j=b-1;j<16;j++) zahyo[0][j]=0;}
  }
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      if(zahyo[i][j]==-1) zahyo[i][j]=zahyo[i-1][j]+zahyo[i][j-1];
    }
  }
  printf("%d\n",zahyo[x-1][y-1]);
  }
}