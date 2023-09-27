#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

const int mill=196471;
const int nYear=(19+20)*5;

int main(){ _;
  int n,y,m,d;
  cin>>n;
  REP(i,n){
    cin>>y>>m>>d;
    int days=mill;
    days-=nYear*(y-1)+5*((y-1)/3);
    REP(j,m-1)
      days-= (y%3==0||(j+1)%2==1) ? 20 : 19;
    days-=d;
    cout<<days<<endl;
  }
}