#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(){ _;
  int n;cin>>n;
  long long sum=0;
  multiset<int> s{};
  REP(i,n){
    int tmp; cin>>tmp;
    s.insert(tmp);
    sum+=tmp;
  }
  cout<<*(s.begin())<<" "<<*(s.rbegin())<<" "<<sum<<endl;
}