#include<iostream>
#include<string>
using namespace std;

int main(){
  int a[26] = {};
  string ch;
  
  while(cin >> ch){
    for(int i = 0; i < ch.size(); i++){
      if(ch[i] >= 'a' && ch[i] <= 'z') a[ch[i]-'a']++;
      else if(ch[i] >= 'A' && ch[i] <= 'Z') a[ch[i]-'A']++;
    }
  }
  for(int i=0;i<26;i++){
    cout << (char)('a'+i) << " : " << a[i] << endl;
  }
  return 0;
}
