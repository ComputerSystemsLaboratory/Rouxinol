#include<bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)



int main(){
  while(1){
    int n,m,p,sum=0;
    cin >> n >> m >> p;
    m--;
    if(!n)break;
    vector<int> x(n);
    rep(i,n)cin>>x[i];
    rep(i,n)sum+=x[i];
    if(x[m]==0)cout << 0 << endl;
    else cout << (int)((double)sum*(100-p)/x[m]) << endl;
  }

  return 0;
}

