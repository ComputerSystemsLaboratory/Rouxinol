#include <stdio.h>

int main(void) {

  int a[4];
  int b[4];

  int hit,blow;

  int i,j;
  char c;

  while(1) { 
   
    if(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3])==EOF || scanf("%d %d %d %d",&b[0],&b[1],&b[2],&b[3])==EOF) break;

    //fflush(stdin);
    hit=blow=0;
    
    for(i=0;i<4;i++) {
       
      for(j=0;j<4;j++) {

	if(a[i]==b[j]) {

	  if(i==j) hit++;
	  else blow++;

	}
	  
      }

    }

  printf("%d %d\n",hit,blow);

  }

  return 0;

}