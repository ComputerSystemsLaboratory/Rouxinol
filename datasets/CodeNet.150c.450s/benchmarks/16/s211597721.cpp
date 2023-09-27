#include <iostream>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
  stack<int> s1;
  stack<pair<int,int> > s2 ;
  int sum = 0;
  char c;
  for(int i = 0 ;cin >> c;i++) {
    if(c == '\\') {
      s1.push(i);
    }
    else if(c == '/' && s1.size() >0) {
      int j=s1.top();
      s1.pop();
      int d = i-j;
      sum +=d;
      while(s2.size() >0 && s2.top().first >j){
        d+=s2.top().second;
        s2.pop();
      }
      s2.push(make_pair(j,d));
    }
  }
  vector<int> ans;
  while(s2.size()) {
    ans.push_back(s2.top().second);
    s2.pop();
  }
  reverse(ans.begin(),ans.end());
  cout << sum <<endl;
  cout << ans.size();
  for(int i =0; i<ans.size(); i++) {
    cout << " " << ans[i];
  }
  cout << endl;
  return 0;
}