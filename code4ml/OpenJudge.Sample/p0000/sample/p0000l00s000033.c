#include <stdio.h>
int main(void){
  int h;
  int h1=0,h2=0,h3=0;

  while(scanf("%d\n",&h)!=EOF) {
    if (h>h3) h3=h;
    if(h3>h2){int s=h2;h2=h3;h3=s;}
    if(h2>h1){int s=h1;h1=h2;h2=s;}
  }
  printf("%d\n",h1);
  printf("%d\n",h2);
  printf("%d\n",h3);
  return 0;
}