#include<stdio.h>
int main(){
  int n;
  int a[3];
  int temp;
  int i,j,k;
  scanf("%d",&n);
  for(k=0;k<n;k++){
    for(i=0;i<3;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<2;i++){
      for(j=0;j<2-i;j++){
	if(a[j]<a[j+1]){
	  temp=a[j];
	  a[j]=a[j+1];
	  a[j+1]=temp;
	}
      }
    }
    if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2]){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}