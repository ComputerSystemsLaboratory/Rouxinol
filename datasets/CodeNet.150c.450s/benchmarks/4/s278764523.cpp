#include <stdio.h>

int main(void)
{
  int m,f,r;
  int su;
 
  do{
    scanf("%d%d%d",&m,&f,&r);
    su = m + f;
    
    if(m == -1 && f == -1 && r == -1)
      break;
    else if(m == -1 || f == -1)
      putchar('F');
    else if(su >= 80)
      putchar('A');
    else if(su >= 65 && su < 80)
      putchar('B');
    else if(su >= 50 && su < 65)
      putchar('C');
    else if(su >= 30 && su < 50){
      if(r >= 50)
	putchar('C');
      else
	putchar('D');
    }
    else
      putchar('F');

    puts("");

  }while(1);


  return(0);
}