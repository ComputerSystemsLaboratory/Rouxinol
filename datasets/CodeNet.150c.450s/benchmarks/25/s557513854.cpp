#include <bits/stdc++.h>
using namespace std;
#define ll long long

int freq[26];

int main(){
  string str;  
  while(cin >> str){
    for(char c: str){
      if(isalpha(c)) freq[tolower(c)-'a']++;
    }
  }

  for(int i=0; i<26; i++){
    cout << (char)(i+'a') << " : " << freq[i] << endl;
  }
  
  return 0;
}