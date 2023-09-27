#include <stdio.h>
int main(){
  int i,sum,n,j,b,a,k;
  char m,m2,o;
  scanf("%d%c",&a,&o);
  for(i=0;i<a;i++){
    sum=0;
    while(1){
      if(scanf("%c",&m)==EOF)break;
      if(m=='\n')break;
      if('2'<=m&&m<='9'){
	scanf("%c",&m2);
	if(m2=='i')sum=sum+(m-'0');
	if(m2=='x')sum=sum+(m-'0')*10;
	if(m2=='c')sum=sum+(m-'0')*100;
	if(m2=='m')sum=sum+(m-'0')*1000;
      }else if(m=='i'||m=='x'||m=='c'||m=='m'){
	if(m=='i')sum=sum+1;
	if(m=='x')sum=sum+10;
	if(m=='c')sum=sum+100;
	if(m=='m')sum=sum+1000;
      }
    }
    if(sum>=1000){
      b=sum/1000;
      if(b!=1)printf("%dm",b);
      else printf("m");
      sum-=b*1000;
    }
    if(sum>=100){
      b=sum/100;
      if(b!=1)printf("%dc",b);
      else printf("c");
      sum-=b*100;
    }
    if(sum>=10){
      b=sum/10;
      if(b!=1)printf("%dx",b);
      else printf("x");
      sum-=b*10;
    }
    if(sum>=1){
      if(sum!=1)printf("%di",sum);
      else printf("i");
    }
    printf("\n");
  }
  return 0;
}
    