#include <iostream>
using namespace std;
int al[30];
int main(){
  string s;
  while(cin>>s){
    for(int i = 0; s.size() > i; i++){
      if('A' <= s[i] && s[i] <= 'Z')al[s[i]-'A']++;
      else if('a' <= s[i] && s[i] <= 'z')al[s[i]-'a']++;
    }
  }
  for(int i = 0; 'z'-'a'+1 > i; i++){
    cout << (char)(i+'a') << " : " << al[i] << endl;
  }
}
