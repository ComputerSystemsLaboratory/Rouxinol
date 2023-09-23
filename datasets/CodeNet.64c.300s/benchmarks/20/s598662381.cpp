#include <stdio.h>

int main(void) {
  
  int d,count,s;

  while(scanf("%d",&d)!=EOF) {

    count=0;
    s=0;

    for(;count<600;count=count+d) {
      s+=count*count*d;
    }

    printf("%d\n",s);
  }

  return 0;

}