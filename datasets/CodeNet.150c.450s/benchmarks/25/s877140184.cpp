#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
  char ch;
  int alph[26] = {};

  while(cin >> ch){
    for (int i = 'a'; i <= 'z'; i++)
      if ( i == tolower(ch)) alph[i-'a']++;
  }

  for (int i = 0; i < 26; i++) {
    printf("%c : %d\n", ('a'+i), alph[i]);
  }
  return 0 ;
}