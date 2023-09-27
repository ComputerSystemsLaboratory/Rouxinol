#include<cstdio>
#include<algorithm>
using namespace std;

bool solve(){
  int a,b,n;
  int map[16][16];
  scanf("%d %d",&a,&b);
  if(a==0&&b==0) return 0;
  fill(map[0],map[0]+256,0);
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int x,y;
    scanf("%d %d",&x,&y);
    map[--x][--y] = -1;
  }
  map[0][0] = 1;
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      if(map[i][j]<0){
        map[i][j] = 0;
      }else{
        if(i!=0) map[i][j]+=map[i-1][j];
        if(j!=0) map[i][j]+=map[i][j-1];
      }
    }
  }
  printf("%d\n",map[a-1][b-1]);
  return 1;
}

int main(){
  while(true) if(!solve()) return 0;
}