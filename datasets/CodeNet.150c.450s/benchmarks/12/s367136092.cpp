
#include <stdio.h>
#define H 250
int main(){

  int i,size,a[H];

  scanf("%d",&size);
  for(i=1;i<=size;i++)
    scanf("%d",&a[i]);

  for(i=1;i<=size;i++)
    {
      printf("node %d: key = %d, ",i,a[i]);

      if( i/2 >= 1 )printf("parent key = %d, ",a[i/2]);

      if( i*2 <= size)printf("left key = %d, ",a[i*2]);

      if( i*2+1 <= size)printf("right key = %d, ",a[i*2+1]);

      puts("");
    }

  return 0;
}
  