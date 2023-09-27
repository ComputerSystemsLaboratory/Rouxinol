#include <iostream>
#include <set>
using namespace std;

int main(){

  int n,m; 
  set<int> s;
  cin >> n;
  for(int i=0; i<n; i++){
    int tmp; cin >> tmp;
    s.insert(tmp);
  }
  cin >> m;
  int ans=0;
  for(int i=0; i<m; i++){
    int tmp; cin >> tmp;
    if(s.find(tmp) != s.end()) ans++;
  }
  cout << ans << "\n";
}