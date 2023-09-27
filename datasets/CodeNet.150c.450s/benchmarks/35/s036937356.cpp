#include <stdio.h>

int main(void) {

  int n;

  int a[6000];

  while(1) {

    int max_a=-100000;
    int sum;

    int i,j;

    scanf("%d",&n);
    getchar();

    if(n==0) break;

    for(i=0;i<n;i++) scanf("%d",&a[i]);

    //for(i=0;i<n;i++) printf("%d ",a[i]);

    for(i=0;i<n;i++) {

      sum=0;

      for(j=i;j<n;j++) {

	sum+=a[j];

	if(max_a<sum) max_a=sum;
	//printf("%d ",max_a);
      }

    }
    
    printf("%d\n",max_a);

  }

  return 0;

}