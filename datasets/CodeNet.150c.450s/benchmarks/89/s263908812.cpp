#include<stdio.h>
int main(){
  int A,a,i,cou,h,d,n;
  while(1){
    scanf("%d %d %d",&a,&d,&n);
    if(a==0&&d==0&&n==0)break;
    cou=0;
    h=a;
    for(i=2;i*i<=a;i++){
      if(h%i==0)break;
    }
    if(i*i>h){
      cou++;
      A=a;
    }
    if(A==1)cou=0;
    while(cou!=n){
      h+=d;
      for(i=2;i*i<=h;i++){
	if(h%i==0)break;
      }
      if(i*i>h){
	cou++;
	A=h;
      }
    }
    printf("%d\n",A);
  }
  return 0;
}
    