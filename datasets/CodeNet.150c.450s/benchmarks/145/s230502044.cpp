#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  unordered_map<string,int> us;
  string s;
  while(cin >> s){
    us[s]++;
  }
  string ans1;
  int times = 0;
  string ans2;
  int length = 0;
  for(auto i : us){
    if(i.second > times){
      ans1 = i.first;
      times = i.second;
    }
    if(i.first.length() > length){
      ans2 = i.first;
      length = i.first.length();
    }
  }
  cout << ans1 << ' ' << ans2 << '\n';
     
}