#include<bits/stdc++.h>
using namespace std;

int main(){
  int m;
  cin>>m;
  set<string> S;
  string s;
  for(int i=0;i<m;i++){
    S.clear();
    cin>>s;
    for(int j=1;j<=s.size();j++){
      string x,y,z,w;
      x = s.substr(0,j);
      z = x;
      y = s.substr(j,s.size()-j);
      w = y;
      reverse(z.begin(),z.end());
      reverse(w.begin(),w.end());
      S.insert(x+y);
      S.insert(y+x);
      S.insert(x+w);
      S.insert(w+x);
      S.insert(z+y);
      S.insert(y+z);
      S.insert(z+w);
      S.insert(w+z);
    }
    cout<<S.size()<<endl;
  }
  return 0;
}

