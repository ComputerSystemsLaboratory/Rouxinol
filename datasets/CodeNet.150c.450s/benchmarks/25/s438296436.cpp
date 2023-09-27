#include<iostream>
#include<cctype>
using namespace std;

#include<cstdio>
// #include<cstring>

int main(){
  int count[26]={};
  char ch;

  while(scanf("%c", &ch)!=EOF){
    if (islower(ch)) count[ch-'a']++;
    if (isupper(ch)) count[ch-'A']++;
  }

  for (int i=0; i<26; i++){
    printf("%c : %d\n", i+'a', count[i]);
  }

  return 0;
}