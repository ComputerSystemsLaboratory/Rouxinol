#include <stdio.h>
int main()
{
  int i,k=0,j;
  char a,cou[27];
  for(i=0;i<28;i++){
    cou[i]=0;
  }                       //syokika
  //  for(i=0;i<1201;i++){
  while(scanf("%c",&a) != EOF ){
    //printf("%c\n", a);
    if('a'<=a&&a<='z'){
      cou[a-'a'+1]+=1;
    }
    if('A'<=a&&a<='Z'){
      cou[a-'A'+1]+=1;
    }
  }
  // printf("hoge\n");
  for(j='a';j<='z';j++){
    k+=1;
    printf("%c : %d\n",j,cou[k]);
  }
  return 0;
}