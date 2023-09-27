#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main(){
  
  int cma = 0, lma = 0;
  string s, ans1, ans2;
  map<string, int> mp;
  map<string, int>::iterator it;
  
  while(cin >> s){
    cma = max(cma, ++mp[s]);
    lma = max(lma, (int)s.length());
  }
  
  for(it = mp.begin();it != mp.end();it++){
    if(it->second == cma) ans1 = it->first;
    if(it->first.length() == lma) ans2 = it->first;
  }
  
  cout << ans1 << " " << ans2 << endl;
  
  return 0;
}
