#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  vector<int> ans;
  while(cin >> n,n){
    int count = 0;
    string s0 = "",s1;
    for(int i = 0;i < n;i++){
      cin >> s1;
      if(s1 == "lu" && s0 == "ru")count++;
      if(s1 == "ru" && s0 == "lu")count++;
      if(s1 == "ld" && s0 == "rd")count++;
      if(s1 == "rd" && s0 == "ld")count++;
      s0 = s1;
    }
    ans.push_back(count);
  }
  for(int i = 0;i < ans.size();i++)cout << ans[i] << endl;
}
