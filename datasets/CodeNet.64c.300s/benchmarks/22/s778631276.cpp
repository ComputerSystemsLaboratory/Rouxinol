#include<stdio.h>
int main(){
  int n,i,j;
  scanf("%d",&n);
  int a[n],b[n],c[n];
  for(i=0;i<n;i++){
    scanf("%d %d %d",&a[i],&b[i],&c[i]);
  }
  for(i=0;i<n;i++){
    j=0;
    if(a[i]*a[i]+b[i]*b[i]==c[i]*c[i]){
      printf("YES\n");
      j++;
    }
    if(a[i]*a[i]+c[i]*c[i]==b[i]*b[i]){
      printf("YES\n");
      j++;
    }
    if(c[i]*c[i]+b[i]*b[i]==a[i]*a[i]){
      printf("YES\n");
      j++;
    }
    if(j==0){
      printf("NO\n");
    }
  }
  return(0);
}