#include<stdio.h>
int main(){
  int a,b,s,i;
  int m[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  while(1){ 
 scanf("%d%d",&a,&b);
 if(a==0&&b==0)break;
 s=b;
 for(i=0;i<a-1;i++)s+=m[i];
 if(s%7==1)printf("Thursday\n");
 else if(s%7==2)printf("Friday\n");
 else if(s%7==3)printf("Saturday\n");
 else if(s%7==4)printf("Sunday\n");
 else if(s%7==5)printf("Monday\n");
 else if(s%7==6)printf("Tuesday\n");
 else if(s%7==0)printf("Wednesday\n");
  }
  return 0;
}