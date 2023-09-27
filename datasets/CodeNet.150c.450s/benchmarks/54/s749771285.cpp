#include<iostream>
#include<cctype>
using namespace std;

#include<cstdio>
#include<cstring>
#include<string>

string Upper(string s){
  string t=s;
  for (int i=0; i<s.size(); i++){
    t[i]=toupper(s[i]);
  }
  return t;
}

int main(){
  string W, T;
  int count=0;

  cin >> W;
  W=Upper(W);

  while(1){
    cin >> T;
    
    if (T=="END_OF_TEXT") break;
    T=Upper(T);
    if (T==W) count++;
  }

  cout << count << "\n";
  

  return 0;
}