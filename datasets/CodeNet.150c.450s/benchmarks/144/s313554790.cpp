#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

array<int,10000> A;
array<int,10000> B;

int main(){ _;
  int n,m,l;cin>>n>>m>>l;
  REP(i,n*m)
    cin>>A[i];
  REP(i,m*l)
    cin>>B[i];
  REP(i,n){
    REP(k,l){
      long long sum=0;
      REP(j,m){
	sum+=A[i*m+j]*B[j*l+k];
      }
      cout<<sum<<(k+1==l?"\n":" ");
    }
  }
}