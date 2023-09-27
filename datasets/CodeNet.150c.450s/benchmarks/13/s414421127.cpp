#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
  int i,k,t,end=0,slen,plen,correct=0;
  char static s[500];
  char static p[500];
  char static c[500];
  scanf("%s",s);
  scanf("%s",p);
  slen=strlen(s);
  plen=strlen(p);
  for(i=0;i<slen;i++){
    for(k=0;k<plen;k++){
      if(k==0)t=i+k;
      c[k]=s[t];
      t++;
      if(i+k+1==slen)t=0;
    }
    if(strcmp(c,p)==0){
      correct=1;
    }
  }
  if(correct==1){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}