#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
  int alphabets[128], index;
  char ch;

  for(int i = 0; i < 128; i++){
    alphabets[i] = 0;
  }

  while(cin >> ch){
    if(ch == '\0') break;
    if(!isalpha(ch)) continue;
    if(isupper(ch)) ch = tolower(ch);
    index = ch - 'a';
    alphabets[index]++;
  }

  for(int i = 65; i < 91; i++){
    putchar(i + 32);
    cout << ' ' << ':' << ' ' << alphabets[i - 65]<< endl;
  }

  return 0;
}