#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <set>
#include <iomanip>
#include <stdio.h>
#include <sstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s;
  cin>>s;
  stack<int> s1;
  stack<pair<long long int,long long int>> s2;
  long long int sum=0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='\\'){
      s1.push(i);
    }
    if(s[i]=='/'&&s1.size()>0){
      int j=s1.top();
      sum+=i-j;
      s1.pop();
      int a=i-j;
      while(s2.size()>0&&s2.top().first>j){
        a+=s2.top().second;
        s2.pop();
      }
      s2.push(make_pair(j,a));
    }
  }

  vector<int> ans;
  while(s2.size()>0){
    ans.push_back(s2.top().second); s2.pop();
  }
  reverse(ans.begin(),ans.end());
  cout<<sum<<endl;
  cout<<ans.size();
  for(int i=0; i<ans.size(); i++){
    cout<<" ";
    cout<<ans[i];
  }
  cout<<endl;
  return 0;
}
