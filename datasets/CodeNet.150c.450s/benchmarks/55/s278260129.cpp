#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,nowi,sum;
  char now,stream[1001];

  scanf("%s",stream);
//    printf("%s\n",stream);
  i=0;

  while(!(stream[0]=='0' && stream[1]=='\0')){
    i=0;
    sum=0;
    while(stream[i]!='\0'){
      now=stream[i];
      if(now=='0')nowi=0;
      else if(now=='1')nowi=1;
      else if(now=='2')nowi=2;
      else if(now=='3')nowi=3;
      else if(now=='4')nowi=4;
      else if(now=='5')nowi=5;
      else if(now=='6')nowi=6;
      else if(now=='7')nowi=7;
      else if(now=='8')nowi=8;
      else if(now=='9')nowi=9;
//      printf("%d ",atoi(&now));
//      sum=sum+atoi(&now);
      sum=sum+nowi;
      i++;
    }
    printf("%d\n",sum);
    scanf("%s",stream);
//    printf("%s\n",stream);

  }

  return 0;
}