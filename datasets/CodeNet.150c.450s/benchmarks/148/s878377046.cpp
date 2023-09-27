#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  char S[10];
  int i;
  int a = 0,b = 0,c = 0,d = 0;
        for(i = 0; i < n; ++i){
  scanf("%s", S);
        if(S[0] == 'A'){
        a++;
        }
        if(S[0] == 'W'){
        b++;
        }
        if(S[0] == 'T'){
        c++;
        }
        if(S[0] == 'R'){
        d++;
        }
  }
  printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n",a,b,c,d);
  
  return 0;
}