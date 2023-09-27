#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int a[1010];
void solve(int n){
  REP(i,n)cin>>a[i];
  sort(a,a+n);
  int result=1e+7;
  REP(i,n-1)
    if(result>a[i+1]-a[i])
      result=a[i+1]-a[i];
  cout<<result<<endl;
}


int main(){ _;
  int n;
  while(cin>>n,n!=0){
    solve(n);
  }
}