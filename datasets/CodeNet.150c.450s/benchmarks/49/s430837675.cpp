#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(){ _;
  int n,tmp;
  for(;;){
    cin>>n;
    if(n==0)return 0;
    multiset<int> s;
    REP(i,n){
      cin>>tmp;
      s.insert(tmp);
    }
    long long int sum=0;
    for(int i:s){
      sum+=i;
    }
    sum-=*(s.begin());
    sum-=*(s.rbegin());
    cout<<sum/(s.size()-2)<<endl;
  }
}