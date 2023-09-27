#include<stdio.h>
int main(){
  char a[1001]={0};
  int c[1001]={0};
  int b=0,d=0,i;
  while(1){
    scanf("%s",a);
    if(a[0]=='0'){
      break;
    }
    while(a[b]!=0){
      c[d]+=a[b]-'0';
      b++;
    }
    d++;
    b=0;
  }
  for(i=0;i<d;i++){
    printf("%d\n",c[i]);
  }
}
  