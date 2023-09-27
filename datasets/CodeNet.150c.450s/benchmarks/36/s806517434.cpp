#include <cstdio>

int main(){
  int d;
  while(~scanf("%d",&d)){
    int area=0;
    for(int x=0; x<600; x+=d)
      area+=x*x*d;
    printf("%d\n",area);
  }
}