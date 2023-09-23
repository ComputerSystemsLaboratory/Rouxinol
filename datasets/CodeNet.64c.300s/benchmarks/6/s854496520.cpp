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
  lli b,f,r,v,n;
  lli num[10][3][4] = {0};

  cin>>n;
  rep(i,n){
    cin>>b>>f>>r>>v;
    num[r-1][f-1][b-1] +=v;
  }

  rep(i,4){
    rep(j,3){
      rep(k,10){
	cout<<" "<<num[k][j][i];
      }
      cout<<endl;
    }
    if(i!=3)cout<<"####################"<<endl;
  }
  return 0;
}