#include <stdio.h>
int main()
{
  char moji[1001];
  int sum,cou,tn;
  while(1){
    scanf("%s",moji);
    if(moji[0]=='0'){
      break;
    }
    sum=0;
    cou=0;
    while(1){
      if(moji[cou]=='\0'){
	break;
      }
      tn=moji[cou]-'0';
      sum=sum+tn;
      cou=cou+1;
    }
    printf("%d\n",sum);
  }
  return 0;
}
    