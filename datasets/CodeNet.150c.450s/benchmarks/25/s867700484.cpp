#include<stdio.h>
int main()
{
  int i,j,alp[26]={0};
  char s,a='a';
  while(scanf("%c",&s)!=EOF){
    if(s>='A' && s<='Z')s+=32;
    for(i=0;i<26;i++){
      if(s==a)alp[i]++;
      a++;
    }
    a='a';
  }
  for(j=0;j<26;j++){
    printf("%c : %d\n",a,alp[j]);
    a++;
  }
  return 0;
}