#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <set>
#include <functional>
#include <sstream>
#include <vector>
using namespace std;

int main(){
  string s, high, low, now;
  int L;
  vector<string> check;

  while(cin >> s >> L){
    if(s == "0" && L == 0) break;
    int cnt = 0;
    for(int i = s.size() ; i < L ; i++){
      s += '0';
    }
    
    check.clear();
    check.push_back(s);
    high = low = s;
    bool flag = 0;
    while(1){
      cnt++;

      sort(high.begin(), high.end());
      sort(low.begin(), low.end());
      reverse(low.begin(), low.end());

      int l = atoi(high.substr(0, high.size()).c_str());
      int h = atoi(low.substr(0, low.size()).c_str());
      //cout << low << ' ' << high << endl;
      // cout << h << ' ' << l << endl;
      int res = h - l;
      ostringstream os;
      os << res;
      //cout << os.str() << endl;
      for(int i = 0 ; i < check.size() ; i++){
	if(os.str() == check[i]){
	  cout << i << ' ' << os.str() << ' ' << cnt-i << endl;
	  flag = 1;
	  break;
	}
      }
      if(flag) break;
      check.push_back(os.str());
      high = low = os.str();
      
      for(int i = high.size() ; i < L ; i++){
	high += '0';
	low += '0';
      }
    }
  }
  return 0;
}