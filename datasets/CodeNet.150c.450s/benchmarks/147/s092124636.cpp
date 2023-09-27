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

int main() {
  int N;
  cin>>N;
  
  vector<int>ans(100000);
  for(int i=1;i*i<=N;i++){
    for(int j=1;j*j<=N;j++){
      for(int k=1;k*k<=N;k++){
        int n=i*i+j*j+k*k+i*j+j*k+k*i;
        ans[n]++;
      }
    }
  }
  for(int i=1;i<=N;i++){
    cout<<ans[i]<<endl;
  }
  
  return 0;
}