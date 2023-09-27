#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
typedef long long i64;
int main(){
  while(true){
    int n;
    vector<int> a;
    cin >> n;
    if(n==0) break;
    rep(i,n){
      int b;
      cin >> b;
      a.push_back(b);
    }
    sort(a.begin(),a.end());
    int total=0;
    repi(i,1,n-1){
      total+=a[i];
    }
    cout << total/(n-2) << endl;;
  }
  return 0;
}