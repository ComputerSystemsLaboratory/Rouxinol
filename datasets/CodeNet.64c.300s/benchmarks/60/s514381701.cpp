#include<cstdio>
#include<algorithm>
using namespace std;
int w,h,n,a,b,s[17][17];
int d(int x,int y){
  if(x==w&&y==h) return 1;
  if(x>w||y>h||s[x][y]!=0) return 0;
  return d(x+1,y)+d(x,y+1);
}
int main(){
  
  scanf("%d %d",&w,&h);
  while(w!=0&&h!=0){
    fill_n(*s,17*17,0);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d %d",&a,&b);
      s[a][b]++;
    }
    
    printf("%d\n",d(1,1));
    scanf("%d %d",&w,&h);
  }
  return (0);
}