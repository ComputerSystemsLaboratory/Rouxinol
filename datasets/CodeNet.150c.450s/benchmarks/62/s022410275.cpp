#include<stdio.h>
int main(){
  int a[3],i,c,f=0;
  scanf("%d %d %d",&a[0],&a[1],&a[2]);
  for(i=0;i<3;i++){
    for(c=0;c<3;c++){
      if(a[i]<a[c]){
	f=a[i];
	a[i]=a[c];
	a[c]=f;
      }
    }
  }
  printf("%d %d %d\n",a[0],a[1],a[2]);
  return(0);
}