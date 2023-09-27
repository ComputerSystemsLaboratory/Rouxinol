#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
  string s;
  cin>>s;
  vector<char> c;
  for(int i=0;i<(int)s.size();i++) 
    c.push_back(s[i]);
  reverse(c.begin(),c.end());
  for(int i=0;i<(int)s.size();i++) 
    cout<<c[i];
  cout<<endl;
  return 0;
}

