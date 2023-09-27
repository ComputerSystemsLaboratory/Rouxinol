#include <iostream>
#include <vector>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string str;

void solve(){
  vector<string> ans;
  string tmp;
  string str1,str2;

  for(int i = 1 ; i < str.size(); i++){
    tmp = str;

    for(int reverseStr = 0; reverseStr < 4; reverseStr++){
      str1 = tmp.substr(0,i);
      str2 = tmp.substr(i);
      if(reverseStr == 1 || reverseStr == 3) reverse(str1.begin(),str1.end());
      if(reverseStr == 2 || reverseStr == 3) reverse(str2.begin(),str2.end());
      bool flag1 = true;
      bool flag2 = true;
      for(int j = 0 ; j < ans.size() ; j++){
        if(ans[j] == str1 + str2) flag1 = false;
        if(ans[j] == str2 + str1) flag2 = false;
      }
      if(flag1) ans.push_back(str1 + str2);
      if(flag2 && (str1 + str2) != (str2 + str1) ) ans.push_back(str2 + str1);
    }

  }
  int res = ans.size();
  cout << res << endl;
  ans.clear();
  return ;
}
int main(){
  int n;
  cin >> n ;
  for(int i = 0; i < n; i++){
    cin >> str;

    solve();
  }
  return 0;
}

