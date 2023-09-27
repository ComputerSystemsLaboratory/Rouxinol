#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
#include<utility>
#include<bitset>
#include<iomanip>
#include<vector>
#include<set>
#include<map>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;


int main(){
  stack<int>s;
  stack<pair<int, int> >sq;
  char ch;
  int sum = 0;
  string str;
  cin >> str;
  for(int i=0; i < str.size(); i++){
    ch = str[i];
    if(ch == '\\')s.push(i);
    else if(ch == '/' && s.size() > 0){
      int j = s.top();
      s.pop();
      sum += i - j;
      int ber = i - j;

      while(sq.size() > 0 && sq.top().first > j){
        ber += sq.top().second;
        sq.pop();
      }
      sq.push(make_pair(j, ber));
    }
  }

  vector<int>ans;
  while(sq.size() > 0){
    ans.push_back(sq.top().second);
    sq.pop();
  }
  reverse(ans.begin(), ans.end());
  cout << sum << endl;
  cout << ans.size();
  for(int i=0; i < ans.size(); i++)cout << ' ' << ans[i];
  cout << endl;
  return 0;
}
