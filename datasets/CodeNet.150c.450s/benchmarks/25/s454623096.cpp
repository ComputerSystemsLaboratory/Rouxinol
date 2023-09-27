#include <bits/stdc++.h>

int main() {

  std::string str;
  int count[26] = {};

  while( std::cin >> str ) {
    for(int i = 0; i < str.size(); ++i) {
      if( 'a' <= str[i] && str[i] <= 'z' ) {
	count[str[i]-'a'] += 1;
      }
      if( 'A' <= str[i] && str[i] <= 'Z' ) {
	count[str[i]-'A'] += 1;
      }
    }
  }
  for(int i = 0; i < 26; ++i) {
    printf("%c : %d\n", i+'a', count[i]);
  }
  
  return 0;
}