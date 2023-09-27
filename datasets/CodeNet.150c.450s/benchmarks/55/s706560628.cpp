#include<stdio.h>
int main(){
  char c[1000];
  int i,x;
  int sum;
  int co;
  while(1){
    co=0;
    sum=0;
    scanf("%s",&c);
    for(i=0;;i++){
      if(c[i]=='\0'){
	co=i;
	break;
      }
    }
    if(c[0]=='0')break;
    
    for(i=0;i<co;i++){
      x =c[i]-'0';
      sum+=x;

    }
    printf("%d\n",sum);
  }
  
  return 0;
}