#include <iostream>
#include <string>
#define alphaNum 26

using namespace std;

int main(){
    string s;
    int count[alphaNum] = {0};
    while (getline(cin, s)) {
      for(int i = 0; i < s.length(); i++){
        if('A' <= s[i] && s[i] <= 'Z'){
          count[s[i] - 'A']++;
        }
        else if('a' <= s[i] && s[i] <= 'z'){
          count[s[i] - 'a']++;
        }
      }
    }
    for(int i = 0; i < alphaNum; i++){
      cout << (char)('a'+i) << " : " << count[i] << endl;
    }
    return 0;
}