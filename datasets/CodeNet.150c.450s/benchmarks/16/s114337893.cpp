#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(void) {
  stack<int> s1;
  stack<pair<int,int> > s2;
  int  i = 0;
  char ch;
  int sum = 0, a = 0;
  
  while (cin >> ch) {
    i++;
    if (ch=='\\') {
      s1.push(i);
    } else if (ch=='/' && s1.size()>0) {
      int j = s1.top();
      s1.pop();
      sum += i - j;
      a = i - j;
      while (s2.size()>0 && s2.top().first>j) {  
        a += s2.top().second;
        s2.pop();
      }
      s2.push(make_pair(j,a));
    }
  }
  
  vector<int> ans;
  while (s2.size()>0) {
    ans.push_back(s2.top().second);
    s2.pop();
  }
  reverse(ans.begin(),ans.end());
  cout << sum << endl;
  cout << ans.size();
  for (int i = 0; i < ans.size(); i++) {
    cout << " " << flush;
    cout << ans[i] << flush;
  }
  cout << endl;
}