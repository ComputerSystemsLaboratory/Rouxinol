#include<cstdio>

int main(){
  int n;scanf("%d",&n);
  for(int i=0;i<n;i++){
    long double d[8];
    for(int i=0;i<8;i++) scanf("%Lf",&d[i]);
    if((d[0]-d[2])*(d[5]-d[7])==(d[4]-d[6])*(d[1]-d[3]))
      puts("YES");
    else
      puts("NO");
  }
}