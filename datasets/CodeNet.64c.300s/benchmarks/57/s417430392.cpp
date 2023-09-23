#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)
bool a[10][10000];

signed main() {
  int r,c;
  while(cin>>r>>c,r){
    loop(i,r)loop(j,c)cin>>a[i][j];
    int p=1<<r;
    int m=0;
    while(p--){
      int s=0;
      loop(j,c){
        int n=0;
        loop(i,r){
          n+=a[i][j]^((p>>i)&1);
        }
        s+=max(n,r-n);
      }
      m=max(m,s);
    }
    cout<<m<<endl;
  }
  return 0;
}