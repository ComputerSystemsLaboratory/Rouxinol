#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int x,S[100],i=0;
  char s[100];

  for(i=0;scanf("%s", s) != EOF; ){

    if ( s[0] == '+' ){
      S[i-2]=S[i-2]+S[i-1];
      i--;
    } else if ( s[0] == '-' ){
      S[i-2]=S[i-2]-S[i-1];
      i--;
    } else if ( s[0] == '*' ){
      S[i-2]=S[i-2]*S[i-1];
      i--;
    } else {
      x = atoi(s);
      S[i]=x;
      i++;
    }
  }
  printf("%d\n",S[i-1]);
  return 0;
}