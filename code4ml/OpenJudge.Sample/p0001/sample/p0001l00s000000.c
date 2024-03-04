#include<stdio.h>

#define  NUM  100

int ans[220];

int main(void)
{
  int num = 0;

  int count = 0;
  int i;
  
  int a, b, c;

  while ((scanf("%d", &a)) != EOF) {   

    scanf("%d", &b);
    
    num = 0;
    c = a + b;

    /* ?????°??? */
    while (1) {
      if (c == 0) break;    
      c = c / 10;
      num++;
    }

    ans[count++] = num;
    
  }
  
  /* ??????????????? */
  for(i = 0; i < count; i++){
    printf("%d\n", ans[i]);
  }
  
}