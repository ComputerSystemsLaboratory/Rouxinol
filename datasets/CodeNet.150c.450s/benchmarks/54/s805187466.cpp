#include <cstdio>
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
string Toupper(string s){
  string t=s;
  for(int i=0;i<s.size();i++){
    t[i]=toupper(s[i]);
  }
  return t;
}
int main(){
  string target,source;
  cin>>target;
  target=Toupper(target);
  int count=0;
  while(1){
    cin>>source;
    if(source=="END_OF_TEXT") break;
    source=Toupper(source);
    if(target==source) count+=1;
  }
  printf("%d\n",count);
  return 0;
}