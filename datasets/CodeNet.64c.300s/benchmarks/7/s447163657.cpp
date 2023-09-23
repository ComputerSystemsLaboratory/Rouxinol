#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define FOR(i,a,b) for (lli i=(a);i<(b);i++)
#define REP(i,n) for (lli i=0;i<(n);i++)
#define rep(i,n) for (lli i=0;i<(n);i++)

#define INF INT_MAX/3
#define PB push_back
#define pb push_back
#define all(a) (a).begin(),(a),end()
#define pll pair<lli,lli>

int main(){
  lli n,input;
  lli S[14]={0},H[14]={0},C[14]={0},D[14]={0};
  char m;

  cin>>n;
  rep(i,n){
    cin>>m>>input;
    if(m=='S')
      S[input]=1;
    else if(m=='H')
      H[input]=1;
    else if(m=='C')
      C[input]=1;
    else if(m=='D')
      D[input]=1;
    else{
      cout<<"error"<<endl;
      break;
    }
  }
  FOR(i,1,14){
    if(S[i]==0)cout<<"S "<<i<<endl;
  }
  FOR(i,1,14){
    if(H[i]==0)cout<<"H "<<i<<endl;
  }
  FOR(i,1,14){
    if(C[i]==0)cout<<"C "<<i<<endl;
  }
  FOR(i,1,14){
    if(D[i]==0)cout<<"D "<<i<<endl;
  }
  
  return 0;
}