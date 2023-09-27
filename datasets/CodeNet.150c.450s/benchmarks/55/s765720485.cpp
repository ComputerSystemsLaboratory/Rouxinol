#include<stdio.h>
#include<string.h>
int main(){
  char s1[1001];
  int sum=0,i;
  while(1){
    scanf("%s",s1);
    if(s1[0]=='0') break;
    int len=strlen(s1);
    for(i=0;i<len;i++){
      sum+=s1[i]-'0';
    }
    printf("%d\n",sum);
    sum=0;
  }
  return(0);
}