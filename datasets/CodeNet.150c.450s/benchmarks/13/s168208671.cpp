#include <iostream>
#include <string>
using namespace std;

int main(){

  string s, p;
  int counter;
  bool result=false;

  getline(cin, s);
  getline(cin, p);

  s+=s;

  for(int i=0; i<s.length(); i++){
    if(s[i]==p[0]){// pの最初の文字があったら、２文字目以降が同じかチェックする.
      for(int j=0; j<p.length(); j++){
        if(s[i+j]!=p[j])break;
        if(j==p.length()-1)result=true;
      }
    }
  }
  if(result)cout << "Yes" << endl;
  else cout << "No" << endl;
}
