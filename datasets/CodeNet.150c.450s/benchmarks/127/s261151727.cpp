#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

string rStr(string str) {
  reverse(str.begin(), str.end());
  return str;
}

void solve() {
  set<string> dict;
  string train; cin>>train;
  
  for (int i = 1; i < train.size(); i += 1) {
    string lhs = train.substr(0,i), rhs = train.substr(i);
    string rLhs = rStr(lhs), rRhs = rStr(rhs);
    

    dict.insert(lhs + rhs);
    dict.insert(lhs + rRhs);
    dict.insert(rLhs + rhs);
    dict.insert(rLhs + rRhs);
    
    dict.insert(rhs + lhs);
    dict.insert(rhs + rLhs);
    dict.insert(rRhs + lhs);
    dict.insert(rRhs + rLhs);
  }
  cout<<dict.size()<<endl;
}

int main (int argc, char const* argv[]) {
  int n; cin>>n;
  
  for(int i=0;i<n;i++)
  solve();
  return 0;
}