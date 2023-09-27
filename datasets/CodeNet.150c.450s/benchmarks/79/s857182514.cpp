#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int deck[60];
int tmpdeck[60];

int main(){ _;
  int n,r,p,c;
  while(cin>>n>>r,!(n==0&&r==0)){
    REP(i,n) deck[i]=n-i;
    REP(i,r){
      cin>>p>>c;
      p--;
      copy(deck+p,deck+p+c,tmpdeck);
      copy(deck,deck+p,tmpdeck+c);
      copy(tmpdeck,tmpdeck+p+c,deck);
    }
    cout<<deck[0]<<endl;
  }
}