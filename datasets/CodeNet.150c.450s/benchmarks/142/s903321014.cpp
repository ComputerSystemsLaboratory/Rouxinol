#include <bits/stdc++.h>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
using namespace std;
using ll = long long;
using d = double;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> a(200005);
  rep(i,n) cin >> a[i];
  int c=a[0];
  rep(i,n-k){
    if(c>=a[k+i]){printf("%s\n", "No");}
    else printf("%s\n", "Yes");
    c=a[1+i];
  }
  return 0;
}
