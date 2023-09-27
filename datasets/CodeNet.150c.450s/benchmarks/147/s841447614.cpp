#include <bits/stdc++.h>
using namespace std;
#include <math.h>
#include <iomanip>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF=1001001001;
vector<pair<int64_t,int64_t>>prime_factorize(int64_t x){
  vector<pair<int64_t,int64_t>>p;
  for(int64_t i=2;i*i<=x;i++){
    int cnt=0;
    if(x%i==0){
    while(x%i==0){cnt++;x/=i;}
    p.push_back(make_pair(i,cnt));
    }
  }
  if(x!=1){p.push_back(make_pair(x,1));}
  return p; 
}
vector<int>ans(10000000);
int main() {
  int N;
  cin>>N;
  for(int x=1;x<=100;x++){
    for(int y=1;y<=100;y++){
      for(int z=1;z<=100;z++){
        int a=x*x+y*y+z*z+x*y+y*z+z*x;
        ans[a]++;
      }
    }
  }
  for(int i=1;i<=N;i++){
    cout<<ans[i]<<endl;
  }
  return 0;
}