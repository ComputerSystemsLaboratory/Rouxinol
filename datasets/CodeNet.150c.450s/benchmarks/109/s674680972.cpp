#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef  pair<int,int>P;
int main(){
  int n;
  vector<P>ve;
  while(cin >> n,n){
    ve.clear();
    int t,s;
    for(int i = 0 ; i < n ; i++ ){
      int a,b,c;
      char ch;
      cin >> a >> ch >> b >> ch >> c;
      s = a*3600 + b*60 + c;
      ve.push_back(P(s,1));
      cin >> a >> ch >> b >> ch >> c;
      t = a*3600 + b*60 + c;
      ve.push_back(P(t,-1));
    }

    sort(ve.begin(),ve.end());

    int ans = 0,sum = 0;
    for(int i = 0 ; i < ve.size() ; i++ ){
      sum += ve[i].second;
      ans = max(ans,sum);
    }
    cout << ans << endl;
  }
  return 0;
}