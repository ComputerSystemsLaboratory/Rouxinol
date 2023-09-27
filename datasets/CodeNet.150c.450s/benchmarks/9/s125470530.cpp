#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){
  char s[201],tmp[201];
  int m,h;


  while(1){
    scanf("%s\n",s);
    if(strcmp(s,"-")==0)
      return 0;
    scanf("%d\n",&m);
    for(int i=0;i<m;i++){
      scanf("%d\n",&h);
      memset(tmp,0,sizeof(tmp));
      int len=strlen(s)-h;
      strncpy(tmp,s,h);
      memmove(s,s+h,len);
      strncpy(s+len,tmp,h);
    }
    puts(s);
  }


}
