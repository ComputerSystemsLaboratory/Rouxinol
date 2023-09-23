#include <stdio.h>
int main(void){
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("%d",a[n-1]);
for(i=n-2;i>=0;i--){
    printf(" %d",a[i]);
}
printf("\n");
return 0;
}