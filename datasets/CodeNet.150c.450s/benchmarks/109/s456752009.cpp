#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

const int T=86400;

int main(){
  int n;
  while(cin>>n){
    if(n==0) return 0;
    
    vector<int> A(T+1);
    int h,m,s;
    char c;
    rep(i,n){
      cin>>h>>c>>m>>c>>s;
      A[3600*h+60*m+s]++;
      cin>>h>>c>>m>>c>>s;
      A[3600*h+60*m+s]--;
    }   
    
    for(int i=1;i<=T;i++){
     A[i]+=A[i-1];
    }
    
    int max=0;
    rep(i,T){
      if(max<A[i]) max=A[i];
    }    
    cout<<max<<endl;    
  }
  
  return 0;
}
