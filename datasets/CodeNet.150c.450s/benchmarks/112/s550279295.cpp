#include<bits/stdc++.h>
using namespace std;
using Int = long long;
//INSERT ABOVE HERE
signed main(){
  int n;
  while(cin>>n,n){
    map<char,char> m;
    for(int i=0;i<n;i++){
      char c,d;
      cin>>c>>d;
      m[c]=d;
    }
    string ans;
    int q;
    cin>>q;
    while(q--){
      char x;
      cin>>x;
      if(m.count(x)) ans+=m[x];
      else ans+=x;
    }
    cout<<ans<<endl;
  }
  return 0;
}

