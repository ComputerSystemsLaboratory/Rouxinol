#include<stdio.h>
int main(){
  char a;
  int i,c[27]={0};
  while(scanf("%c",&a)!=EOF){
    if(a>=65&&a<=90){
      c[a-65]++;
    }
    if(a>=97&&a<=122){
      c[a-97]++;
    }
  }
  for(i=0;i<26;i++){
    printf("%c : %d\n",i+97,c[i]);
  }
}