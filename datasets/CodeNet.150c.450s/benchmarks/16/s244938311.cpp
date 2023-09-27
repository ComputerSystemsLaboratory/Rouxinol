#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void solve(){
  string s; cin >> s;
  int n = s.size();
  stack<int> s1;
  int ans1 = 0;
  for(int i = 0; i < n; i++){
    if(s[i] == '\\') s1.push(i);
    else if(s[i] == '/' && s1.empty() == 0){
      ans1 += i - s1.top();
      s1.pop();
    }
  }
  cout << ans1 << endl;
  stack<int> s2;
  stack<pair<int, int> > s3;
  for(int i = 0; i < n; i++){
    if(s[i] == '\\') s2.push(i);
    else if(s[i] == '/' && s2.empty() == 0){
      int x = s2.top();
      s2.pop();
      int y = i - x;
      while(s3.empty() == 0 && s3.top().first > x){
        y += s3.top().second;
        s3.pop();
      }
      s3.push(make_pair(x, y));
    }
  }
  vector<int> ans;
  while(s3.empty() == 0){
    ans.push_back(s3.top().second);
    s3.pop();
  }
  cout << ans.size();
  for(int i = ans.size() - 1; i >= 0; i--){
    cout << " " << ans[i];
  }
  cout << endl;
  return;
}

int main(){
  solve();
  return 0;
}

