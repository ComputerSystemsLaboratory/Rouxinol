#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  char c;
  int num[26] = {};

  while(cin>>c){
    if('a' <= c && c <= 'z'){
      num[c-'a']++;
    }else if('A' <= c && c <= 'Z'){
      num[c-'A']++;
    }
  }

  for(int i = 0; i < 26; i++){
    printf("%c : %d\n",i+'a',num[i]);
  }
}