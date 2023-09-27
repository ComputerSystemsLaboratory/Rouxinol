// 1_8_C
#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  int alphabet[26] = {};
  while(cin >> s){
    for(int i = 0; i < (int)s.length(); i++){
      if('A' <= s[i] && s[i] <= 'Z'){
        alphabet[s[i]-'A']++;
      } else if('a' <= s[i] && s[i] <= 'z'){
        alphabet[s[i]-'a']++;
      }
    }
  }

  for(char c = 'a'; c <= 'z'; c++){
    cout << c << " : " << alphabet[c-'a'] << endl;
  }
  return 0;
}