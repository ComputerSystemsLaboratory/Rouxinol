#include <stdio.h>

int main(void) {

  int seq[5];
  int i,j,temp;

  scanf("%d %d %d %d %d",&seq[0],&seq[1],&seq[2],&seq[3],&seq[4]);

  for(i=0;i<4;i++) {
    for(j=0;j<4-i;j++) {
      if(seq[j]<seq[j+1]) {
	temp=seq[j];
	seq[j]=seq[j+1];
	seq[j+1]=temp;
      }
    }
  }

  for(i=0;i<5;i++) {
    if(i==0) printf("%d",seq[i]);
    else printf(" %d",seq[i]);
  }

  puts("");
  
  return 0;
}