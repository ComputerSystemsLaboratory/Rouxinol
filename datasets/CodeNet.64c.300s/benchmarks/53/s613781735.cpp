#include <stdio.h>

int main(void){
  int a,b,c;
  int x=0,y=0;

  scanf("%d %d %d",&a,&b,&c);
  
  for(int x = a ; x <= b ; x++){

    if (c%x == 0) {
      y++;
    }
  }
  printf("%d\n",y);

  return 0;
}
      