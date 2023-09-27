#include<cstdio>
int main(){
  int n,m,l;
  scanf("%d %d %d",&n,&m,&l);
  printf("%s\n",(n<m && m<l)?"Yes":"No");
}