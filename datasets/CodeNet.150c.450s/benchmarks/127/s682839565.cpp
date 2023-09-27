#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  int m;
  cin>>m;
  REP(i,m){
    string str;
    cin>>str;
    set<string> s;
    REP(i,str.size()-1){
      REP(j,2)REP(k,2){
        string fwd=str.substr(0,i+1);
        string bwd=str.substr(i+1);
        if(j)
          reverse(begin(fwd),end(fwd));
        if(k)
          reverse(begin(bwd),end(bwd));
        s.insert(fwd+bwd);
        s.insert(bwd+fwd);
      }
    }
    cout << s.size() << endl;
  }
  return 0;
}