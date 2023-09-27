#include <iostream>
using namespace std;
int main(){
  string s;cin>>s;
  string t;cin>>t;
  string ss = s+s;
  for(int i = 0; s.size() > i; i++){
    bool ok = true;
    for(int j = 0; t.size() > j; j++){
      if(t[j] != ss[i+j]){
        ok = false;
        break;
      }
    }
    if(ok){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
