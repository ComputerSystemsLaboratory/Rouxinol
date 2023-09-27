#include<bits/stdc++.h>
using namespace std;
int main(){
  int d;
  cin>>d;
  vector<int> c(26);
  for(int i=0;i<26;i++)
    cin>>c.at(i);
  vector<vector<int>> s(d,vector<int>(26));
  for(int i=0;i<d;i++)
    for(int j=0;j<26;j++)
      cin>>s.at(i).at(j);
  vector<int> t(d);
  for(int i=0;i<d;i++){
    cin>>t.at(i);
    t.at(i)--;
  }
  vector<set<int>> l(26);
  for(int i=0;i<26;i++)
    l.at(i).insert(0);
  int64_t p=0;
  for(int i=1;i<=d;i++){
    p+=s.at(i-1).at(t.at(i-1));
    l.at(t.at(i-1)).insert(i);
    for(int j=0;j<26;j++)
      p-=c.at(j)*(i-*rbegin(l.at(j)));
    cout<<p<<endl;
  }
}