#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
  int i,wlen,tlen,cnt=0;
  char W[10];
  char T[1000];
  scanf("%s",W);
  wlen=strlen(W);
  for(i=0;i<wlen;i++){
    if(65<=W[i]&&W[i]<=90){
      W[i]=W[i]+32;
    }
  }
  while(1){
    scanf("%s",T);
    if(strcmp(T,"END_OF_TEXT")==0)break;
    tlen=strlen(T);
    for(i=0;i<tlen;i++){
      if(65<=T[i]&&T[i]<=90){
        T[i]=T[i]+32;
      }
    }
    if(strcmp(W,T)==0){
      cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}