#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
  int D;
  cin >> D;
  vector<int> c(27);
  for(int i=1;i<27;i++){
    cin >> c.at(i);
  }
  
  vector<vector<int>> s(D+1,vector<int>(27));
  for(int i=1;i<D+1;i++){
    for(int j=1;j<27;j++){
      cin >> s.at(i).at(j);
    }
  }
  
  vector<int> t(D+1);
  for(int i=1;i<D+1;i++){
    cin >> t.at(i);
  }
  
  vector<int> last(27,0);
  
  ll ans=0;
  
  for(int i=1;i<D+1;i++){
    ans += s.at(i).at(t.at(i));
    last.at(t.at(i)) = i;
    for(int j=1;j<27;j++){
      ans -= c.at(j) * (i - last.at(j));
    }
    cout << ans << endl;
  }
  
  return(0);
}