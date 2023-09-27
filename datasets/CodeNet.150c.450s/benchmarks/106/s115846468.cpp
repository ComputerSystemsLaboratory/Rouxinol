#include<cstdio>

int main(){
  int a,b,c,h,i,j;
  j=0;
  scanf("%d %d %d",&a,&b,&c);
  for(i=a;i<=b;i++){
    h=c%i;
    if(h==0)
      j++;
  }
  printf("%d\n",j);
  return 0;
}