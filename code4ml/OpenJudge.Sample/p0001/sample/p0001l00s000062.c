#include <stdio.h>
#include <string.h>
int main(){
  int i,j,k;
  char s[1000000]={0};
  while(scanf("%d %d",&i,&j) != EOF){
    k=0;
    k=i+j;
    sprintf(s,"%d",k);
    i=strlen(s);
    printf("%d\n",i);
  }
    return (0);
}