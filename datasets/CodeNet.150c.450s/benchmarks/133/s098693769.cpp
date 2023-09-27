#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int d;
  cin >> d;
  vector<int> c(26);
  vector<vector<int>> s(d,vector<int>(26));
  int i,j;
  for(i=0;i<26;i++){
    cin >> c.at(i);
  }
  for(j=0;j<d;j++){
    for(i=0;i<26;i++){
      cin >> s.at(j).at(i);
    }
  }
  
  vector<int> t(d),last(26,-1);
  int v=0;
  for(j=0;j<d;j++){
    cin >> t.at(j);
    t.at(j)--;
    last.at(t.at(j))=j;
    v += s.at(j).at(t.at(j));
    for(i=0;i<26;i++){
      v -= c.at(i)*(j-last.at(i));
    }
    cout << v << endl;
  }
}