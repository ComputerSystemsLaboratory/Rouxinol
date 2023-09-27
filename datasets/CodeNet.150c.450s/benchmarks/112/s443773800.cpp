#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct CHANGE{
  char before;
  char after;
};

int main(){
  int i, j, n, m;
  string s, t, str;
  CHANGE change;
  vector<CHANGE> Change;

  while(1){
    cin >> n;
    if(n == 0) break;

    for(i=0; i<n; ++i){
      cin >> s >> t;
      change.before = s[0];
      change.after = t[0];
      Change.push_back(change);
    }

    cin >> m;
    for(i=0; i<m; ++i){
      cin >> s;
      str.push_back(s[0]);
    }

    for(i=0; i<str.size(); ++i){
      for(j=0; j<Change.size(); ++j){
        if(str[i] == Change[j].before){
          str[i] = Change[j].after;
          break;
        }
      }
    }

    cout << str << endl;
    Change.clear();
    str.clear();
  }

  return 0;
}