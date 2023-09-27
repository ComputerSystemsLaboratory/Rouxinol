#include<bits/stdc++.h>
using namespace std;
using Int = long long;
//INSERT ABOVE HERE
signed main(){
  Int n;
  while(cin>>n,n){
    Int x=0,y=0;
    for(Int i=0;i<n;i++){
      Int a,b;
      cin>>a>>b;
      if(a>b) x+=a+b;
      if(a<b) y+=a+b;
      if(a==b) x+=a,y+=b;
    }
    cout<<x<<" "<<y<<endl;
  }
  return 0;
}

