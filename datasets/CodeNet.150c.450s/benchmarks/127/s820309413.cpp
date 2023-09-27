#include <bits/stdc++.h>
using namespace std;

string rev(string s){
  string ans="";
  for(int i=s.size()-1; i>=0; i--)
    ans += s.substr(i,1);
  return ans;
}

int main(){

  int n;
  cin >> n;
  for(int k=0; k<n; k++){
    string s;
    cin >> s;
    vector<string> ans;
    for(int i=1; i<s.size(); i++){
      string pre  = s.substr(0,i);
      string late = s.substr(i,s.size()-i);
      ans.push_back(pre+late);
      ans.push_back(late+pre);
      ans.push_back(rev(pre)+late);
      ans.push_back(late+rev(pre));
      ans.push_back(rev(late)+pre);
      ans.push_back(pre+rev(late));
      ans.push_back(rev(late)+rev(pre));
      ans.push_back(rev(pre)+rev(late));
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()), ans.end());
    cout << ans.size() <<endl;
  }
}