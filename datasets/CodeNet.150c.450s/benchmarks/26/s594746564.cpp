#include<cstdio>
int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  if(n==m)printf("a == b\n");
  else printf("a %c b\n",(n<m)? '<':'>');
}