//Hanafuda Shuffle
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n)  for(int i=0; i<n; i++)

int main(){
  int n, r;
  while(true){
    cin>>n>>r;
    if(n==0 && r==0)break;
    int ans=n;
    stack<pair<int, int> > st;
    rep(i,r){
      int p, c;
      cin>>p>>c;
      st.push(pair<int, int>(p, c));
    }
    while(!st.empty()){
      pair<int, int> tmp=st.top(); st.pop();
      if(ans>(n-tmp.second)){ans-=(tmp.first-1);}//オレンジ
      else if(ans>(n-tmp.first-tmp.second+1)){ans+=tmp.second;}//ブルー
    }
    cout<<ans<<endl;
  }
  return 0;
}