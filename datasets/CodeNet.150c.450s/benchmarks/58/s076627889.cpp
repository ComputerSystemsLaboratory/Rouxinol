#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int main(){
  int i,n,a[MAX];
char S[MAX];
  for ( i = 1; i < MAX ;i++){
    if(scanf("%s",S) == EOF)break;
    //printf("%s",S);
    if (S[0] == '+'){
      a[i-2] = a[i-2]+a[i-1];
      i-=2;
    } 
    else if (S[0] == '-'){
      a[i-2] = a[i-2]-a[i-1];
      i-=2;
    }
    else if (S[0] == '*'){
      a[i-2] = a[i-2]*a[i-1];
      i-=2;
    }
    else a[i] = atoi(S);

  }  
  printf("%d\n",a[1]);


}