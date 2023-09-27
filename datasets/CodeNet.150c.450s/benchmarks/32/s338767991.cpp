#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

#define PB push_back
#define MP make_pair
#define ALL(a) (a).begin(),(a).end()
#define PII pair<int,int>
#define VS vector<string>
#define VI vector<int>
#define ll long long
#define ull unsigned long long
#define FST first
#define SEC second
int main(){
  int m,na,nb;
  while(1){
    cin>>m>>na>>nb;
    if(m+na+nb==0)break;
    VI V(m);
    REP(i,m)cin>>V[i];
    sort(ALL(V));
    reverse(ALL(V));
    int ma=-1,ans=-1;
    for(int i=na;i<=nb;i++){
      int d=V[i-1]-V[i];
      if(d>=ma){
        ma=d;ans=i;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}