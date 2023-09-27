#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int num[101];

int main(){ _;
  int n,m,p;
  while(cin>>n>>m>>p,!(n==0&&m==0&&p==0)){
    int sum=0;
    REP(i,n){
      cin>>num[i];
      sum+=num[i];
    }
    m--;
    cout<<(num[m]==0?0:(100-p)*sum/num[m])<<endl;
  }
}