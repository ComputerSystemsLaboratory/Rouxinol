#include <iostream>
#include <sstream>
#include <map>
using namespace std;
int main(){
  string s,S;
  int mx = 0;
  map<string,int>mp;
  getline(cin,S);
  stringstream ss(S);
  string ans2,ans1;
  while(ss >> s){
    if((int)s.size() > mx){
      mx = s.size();
      ans1 = s;
    }
    mp[s]++; 
  }

  map<string,int>::iterator it = mp.begin();
  int mx2 = 0;

  for(;it != mp.end();it++){
    if((*it).second > mx2){
      mx2 = (*it).second;
      ans2 = (*it).first;
    }
  }
  cout << ans2 << ' ' << ans1 << endl;
}