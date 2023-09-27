#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
  int N;
  cin>>N;
  int sum=0;
  map<int,int> mp;
  while(N--){
    int a;
    cin>>a;
    mp[a]++;
    sum+=a;
  }
  int Q;
  cin>>Q;
  while(Q--){
    int a,b;
    cin>>a>>b;
    sum+=mp[a]*(b-a);
    mp[b]+=mp[a];
    mp.erase(a);
    cout<<sum<<endl;
  }
}