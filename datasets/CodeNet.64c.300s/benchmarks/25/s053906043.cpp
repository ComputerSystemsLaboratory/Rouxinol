#include<cstdio>
using namespace std;
int main(){
  int a[10],b[4],i,h,br,a1,a2,a3,a4;
  while(scanf("%d%d%d%d",&a1,&a2,&a3,&a4)!=EOF){
    scanf("%d%d%d%d",&b[0],&b[1],&b[2],&b[3]);
    for(i=0,h=0,br=0;i<10;i++)a[i]=0;
    a[a1]=1,a[a2]=2,a[a3]=3,a[a4]=4;
    for(i=0;i<4;i++)if(a[b[i]]==i+1)h++;else if(a[b[i]])br++;
    printf("%d %d\n",h,br);
  }
}