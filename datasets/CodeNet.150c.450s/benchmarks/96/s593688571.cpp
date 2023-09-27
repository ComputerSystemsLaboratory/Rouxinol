#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define mod 1000000007 //1e9+7
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 21

string data[10] = {
  "",
  ".,!? ",
  "abc",
  "def",
  "ghi",
  "jkl",
  "mno",
  "pqrs",
  "tuv",
  "wxyz",
}; 


void calc(){
  string s,ans;
  vector<pair<int,int> > vec;
  
  cin >> s;

  int last = -1;
  for(int i=0;i<s.size();i++){
    if(i>0 && s[i-1]!='0' && s[i]=='0') vec.push_back({i,i-(last+1)});
    if(s[i]=='0') last = i;
  }
  
  for(int i=0;i<vec.size();i++){
    ans += data[s[vec[i].first-1]-'0'][(vec[i].second-1)%(int)(data[s[vec[i].first-1]-'0'].size())];
  }
    
  cout << ans << endl;
  
  return;
}

int main(){
  int n;

  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
    calc();
  }

  return 0;
}