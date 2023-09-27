#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int main(){
  
  string s,str1,str2;
  map<string,int> mp;

  while(cin >> s){

    if(mp.find(s) == mp.end()) mp[s] = 1;
    else mp[s]++;

    if(mp[s] > mp[str1]) str1 = s;
    if(s.size() > str2.size()) str2 = s;

  }
  
  cout << str1 << ' ' << str2 << endl;
  return (0);
}