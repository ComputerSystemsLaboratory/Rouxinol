#include <iostream>
#include <algorithm>
#include <set>
#include <cstring>
using namespace std;

int main(){
  int n;
  cin >> n;
  while(n--){
    string s;
    cin >> s;
    set<string> ans;
    string a, b;
    for(int i = 0 ; i < s.size() ; i++){
      a = s.substr(0, i);
      b = s.substr(i);
      ans.insert(a+b);
      ans.insert(b+a);
      reverse(a.begin(), a.end());
      ans.insert(a+b);
      ans.insert(b+a);
      reverse(b.begin(), b.end());
      ans.insert(a+b);
      ans.insert(b+a);    
      reverse(a.begin(), a.end());
      ans.insert(a+b);
      ans.insert(b+a);        
    }
    
    cout << ans.size() << endl;
  }
  return 0;
}