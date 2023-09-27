#include <bits/stdc++.h>
using namespace std;
typedef int64_t ll;

int main(){
  int t,n;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n;
    ll a[n];
    string s;
    for(int j=0;j<n;j++){
      cin>>a[j];
    }
    cin>>s;
    for(int j=n-1;j>=0;j--){
      if(a[j]>0){
        if(s[j]-'0'==1){cout<<1<<endl;break;}
        for(int k=0;k<62;k++){
          if((a[j]>>k)&1){
            for(int l=j-1;l>=0;l--){
              if((a[l]>>k)&1)a[l]^=a[j];
            }
            break;
          }
        }
      }
      if(j==0)cout<<0<<endl;
    }
  }
}
