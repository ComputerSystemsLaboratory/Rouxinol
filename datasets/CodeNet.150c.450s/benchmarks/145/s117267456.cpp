#include<iostream>
#include<string>
#include<cstdlib>
#include<map>
#include<algorithm>

using namespace std;

int main(){
  string str;
  int max_len = 0;
  int max_fac = 0;
  string max_str1;
  string max_str2;
  map<string, int> map_str;
  while(cin >> str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    map_str[str]++;
  }

  map<string, int>::iterator it;
  for(it = map_str.begin(); it != map_str.end(); it++) {
    if(max_len < (it->first).size()) {
      max_len = (it->first).size();
      max_str1 = it->first;
    }
    if(max_fac < it->second) {
      max_fac = it->second;
      max_str2 = (it->first);
    }
  }

  cout << max_str2 << " " << max_str1 << endl;

  return 0;
}