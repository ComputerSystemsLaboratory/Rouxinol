#include <stdio.h>

int main(void){
  int a,b;
  int i,j;

  while( 1 ){
    if( scanf("%d %d ",&a,&b)!=2 )
      break;

    a += b;
    i=1;
    j=0;
    while( 1 ){
      if( a<i )break;
      i*=10;
      j++;
    }
    printf("%d\n",j);
  }

  return 0;
}