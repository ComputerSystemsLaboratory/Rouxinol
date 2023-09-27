#include <cstdio>
using namespace std;
int main(){
  int *p,i,n,j,a1,b1,buf;
  scanf("%d",&n);
  p=new int[n];
  scanf("%d",&i);
  for(j=0;j<n;j++)p[j]=j+1;
  for(j=0;j<i;j++){
    scanf("%d,%d",&a1,&b1);
    a1--;b1--;
    buf=p[a1];
    p[a1]=p[b1];
    p[b1]=buf;
  }
  for(i=0;i<n;i++)printf("%d\n",p[i]);
}