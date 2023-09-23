#include<stdio.h>
int main()
{
  int a[100],s,j,i;
    scanf("%d",&s);
  for(i=0;i<s;i++){
    scanf("%d",&a[i]);
  }
  for(j=s-1;j>=0;j--){
    if(j == 0){
      printf("%d",a[j]);
      printf("\n");
    }
    else{
    printf("%d ",a[j]);
    }}
   return 0;
}