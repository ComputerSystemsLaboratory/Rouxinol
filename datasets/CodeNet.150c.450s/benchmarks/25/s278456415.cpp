#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main(){
  char ch;
  int alpha[26]={0};
  int i;

  /*for(int j=0; j<26; j++){
    alpha[j]=0;
  }*/

  while(scanf("%c", &ch)!=EOF){
    if(isalpha(ch)){
      ch=toupper(ch);
      i=ch-'A';
      alpha[i]+=1;
    }
  }
  //cout<<"done";
  for(int j=0; j<26; j++){
    printf("%c : %d\n", j+'a', alpha[j]);
  }

  return 0;
}