#include <stdio.h>
int main()
{
  int a[101],n,cou;
  scanf("%d",&n);
  for(cou=1;cou<=n;cou++){
    scanf("%d",&a[cou]);
  }
  for(cou=n;cou>=1;cou--){
    printf("%d",a[cou]);
    if(cou==1){
      break;
    }
      printf(" ");
  }
  printf("\n");
  return 0;
}