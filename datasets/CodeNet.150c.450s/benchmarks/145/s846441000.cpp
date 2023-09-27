#include <iostream>
#include <map>
using namespace std;

int main() {
  string strMxWC, strMxWL, str;
  map<string,int> mp;
  
  while(cin>>str) {
    mp[str]++;
    if(mp[strMxWC]<mp[str]) strMxWC=str;
    if(strMxWL.size()<str.size()) strMxWL=str;
  }
  cout << strMxWC << " " << strMxWL << endl;
  
  return 0;
}