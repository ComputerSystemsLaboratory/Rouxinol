#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  set<string> id;

  cin >> n;
  for(int i=0;i<n;i++){
    string s;
    cin >> s;
    id.insert(s);
  }

  cin >> m;
  int open = 0;
  for(int i=0;i<m;i++){
    string s;
    cin >> s;
    if(id.count(s) == 0)cout << "Unknown " << s << endl;
    else {
      cout << (open?"Closed":"Opened") <<  " by " << s << endl;
      open = 1-open;
    }
  }
}