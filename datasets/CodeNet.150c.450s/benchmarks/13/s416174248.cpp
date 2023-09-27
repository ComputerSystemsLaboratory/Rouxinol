#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
  char s[100],p[100];
  int i,k,n,cnt=0,t=0,lens,lenp;
  scanf("%s %s",s,p);
  lens=strlen(s);
  lenp=strlen(p);
  for(i=0;i<lens;i++){
    cnt=0;
    if(s[i]==p[0]){
      cnt++;
      for(k=1;k<lenp;k++){
        if(p[k]==s[(i+k)%lens]){
          cnt++;
        }
      }
      if(cnt==lenp)t++;
    }
  }
  if(t>=1){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
}