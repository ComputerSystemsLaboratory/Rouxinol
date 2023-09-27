#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
  int n,m;
  while(cin >> n,n){
    map<string,string>mm;
    map<string,int>mm2;
    string ans;
    for(int i=0; i<n; i++){
      string in,in2;
    cin >> in >> in2;
    mm[in] = in2;
    mm2[in] = 1;
    }
    
    cin >> m;
    for(int i=0; i<m; i++){
      string in;
      cin >> in;
      if(mm2[in]) ans += mm[in];
      else ans += in;
    }
    cout << ans << endl;
  }
  return 0;
}