#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(){
  int i, j;
  char str[21], rev[21];

  scanf("%s", str);
  i = 0; j = 0;
  while(str[i] != '\0') i++;
  i--;
  while(i >= 0){
    rev[j] = str[i];
    i--; j++;
  }
  rev[j] = '\0';

  printf("%s\n", rev);

  return 0;
}