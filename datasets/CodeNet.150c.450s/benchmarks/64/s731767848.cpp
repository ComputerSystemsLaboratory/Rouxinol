#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
vector<int> a(30);
int n,q,m;
bool check(int cnt, int m){
  if(m == 0) return true;
  if(cnt >= n) return false;
  int res = check(cnt+1,m) || check(cnt+1,m-a[cnt]);
  return res;
}
int main(){
  cin >> n;
  rep(i,n) cin >> a[i];
  cin >> q;
  rep(i,q) {
    cin >> m;
    if(check(0,m) == true) cout << "yes" << endl;
    else cout << "no" << endl;
  } 
  return 0;
}

