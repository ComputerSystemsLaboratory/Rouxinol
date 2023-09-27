#include<stdio.h>
int main(){
  char a;
  int c[26],i;
  //syokika
  for(i=0;i<26;i++){
    c[i]=0;
  }
  //
  while(scanf("%c",&a)!=EOF){

    if(a>='A'&&a<='Z')a+=32;

    if(a>='a'&&a<='z'){
      int num = a - 'a';
      c[num]++;
    }
  }
  for(i=0;i<26;i++){
    printf("%c : %d\n",i+'a',c[i]);
  }
  return 0;
}