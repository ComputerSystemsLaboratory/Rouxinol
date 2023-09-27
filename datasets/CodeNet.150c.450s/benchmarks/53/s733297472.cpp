#include <bits/stdc++.h>
#include<algorithm>
#define int long long
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF 1000000000000

signed main() {
int n;
cin>>n;
int d=pow(n,0.5)+1;
int waru=2;
cout<<n<<':';
while(waru<=d){
  if(n%waru==0){
    cout<<' '<<waru;
    n/=waru;
  }
  else waru++;
}
if(n>1){cout<<' '<<n;}
cout<<endl;
}

