#pragma GCC optimize ("O3")
#pragma GCC target ("avx")
#include <stdio.h>
#include <string.h>
int n;
char com[15];
char str[15];

int C[1777771];

int g(char ch){
  if(ch=='A')return 1;
  if(ch=='G')return 2;
  if(ch=='T')return 3;
  return 4;
}

int f(){
  int res=0;
  for(int i=0;str[i]!='\0';i++){
    res=res*4+g(str[i]);
  }
  return res;
}

int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%s %s",com,str);

    int key=f();
    
    if(com[0]=='f'){
      int ans=C[key%1777771];
      if(ans)printf("yes\n");
      else printf("no\n");
    }else{
      C[key%1777771]=1;
    }
  }
  return 0;
}