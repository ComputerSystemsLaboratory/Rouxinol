#include <stdio.h>

int main(void){
  int w=0, n=0;
  int a[30], b[30], c[30];
  int i, j, tmp;

  scanf("%d", &w);
  scanf("%d", &n);

  for (i=0; i<n; i++){
    scanf("%d,%d", &a[i], &b[i]);    
  } 

  for (i=0; i<w; i++) {
  	c[i] = i+1;
  }

 
  //printf("test----------\n");

  for (i=0; i<n; i++){
  	tmp = c[a[i]-1];
    c[a[i]-1] = c[b[i]-1];
    c[b[i]-1] = tmp;
    /*
    for (j=0; j<w; j++) {
  	  printf("%d ", c[j]);
    }
    printf("\n");*/
  } 

  for (i=0; i<w; i++) {
  	printf("%d\n", c[i]);
  }

  return 0;
}
