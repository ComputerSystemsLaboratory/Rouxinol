#include <stdio.h>
#include <stdlib.h>

int main(void){
  int x, y, s;
  int ans;
  int max, i, j, t;

  while(1){
    scanf("%d %d %d", &x, &y, &s);
    if(x+y+s == 0){ break; }
    max = 0;
    
    for(i = 1; i <= s; i++){
      for(j = 1; i + j <= s; j++){
	t = (int)(i*(100+x)/(double)100.0) + (int)(j*(100+x)/(double)100.0);
	//printf("i:%d j:%d: ", i, j);
	//printf("%d + %d = %d\t", (int)(i*(100+x)/(double)100.0), (int)(j*(100+x)/(double)100.0), t);
	if(t == s){
	  ans = (int)(i*(100+y)/(double)100.0) + (int)(j*(100+y)/(double)100.0);
	  //printf("%d + %d = %d", (int)(i*(100+y)/(double)100.0), (int)(j*(100+y)/(double)100.0), ans);
	  if(max < ans){
	    max = ans;
	  }
 	}
	//printf("\n");
      }
    }

    printf("%d\n", max);
  }

  return 0;
}