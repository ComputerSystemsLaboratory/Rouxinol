#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

array<int,10000> A;
array<int, 100> b;

int main(){ _;
  int n,m;cin>>n>>m;
  REP(i,n*m)
    cin>>A[i];
  REP(i,m)
    cin>>b[i];
  REP(i,n){
    int sum=0;
    REP(j,m)
      sum+=A[i*m+j]*b[j];
    cout<<sum<<endl;
  }
}