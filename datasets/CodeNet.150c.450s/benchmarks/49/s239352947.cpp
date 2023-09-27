#include<bits/stdc++.h>
using namespace std;
#define OUT(x) cout<<x<<endl
#define debug(x) cout<<#x<<": "<<x
const int BA = 1000;
const int INFTY = (1<<21);
int main(){
  int n,ans;
  int s[1001];
  while(cin>>n&&n){
    ans = 0;
    for(int i=0;i<n;i++)cin >> s[i];
    
    sort(s,s+n);
    for(int i=1;i<n-1;i++)ans+=s[i];
    ans/=n-2;
    OUT(ans);
  }
}