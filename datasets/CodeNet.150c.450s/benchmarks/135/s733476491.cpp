#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)



int main(){
  while(1){
  int n,m;
  cin >> n >> m;
  if (n==0)break;
  vector<int> h(n),w(m);
  rep(i,n)cin>>h[i];
  rep(i,m)cin>>w[i];

  set<long long> w_ver,w_hor;
  vector<long long>cum_ver(n+1),cum_hor(m+1);
  map<long long,int> mp_ver,mp_hor;
  rep(i,n+1){
    if(i==0){
      cum_ver[i] = 0;
    } else {
      cum_ver[i] = cum_ver[i-1]+h[i-1];
    }
  }
  rep(i,m+1){
    if(i==0){
      cum_hor[i] = 0;
    } else {
      cum_hor[i] = cum_hor[i-1]+w[i-1];
    }
  }

  rep(l,n){
    for(int r=l+1;r<=n;r++){
      double width = cum_ver[r]-cum_ver[l];
      if (w_ver.count(width)==0){
        w_ver.insert(width);
        mp_ver[width] = 1;
      } else {
        mp_ver[width]++;
      }
    }
  }
  rep(l,m){
    for(int r=l+1;r<=m;r++){
      double width = cum_hor[r]-cum_hor[l];
      if (w_hor.count(width)==0){
        w_hor.insert(width);
        mp_hor[width] = 1;
      } else {
        mp_hor[width]++;
      }
    }
  }
  long long sum = 0;
  for (auto itr=w_ver.begin();itr!=w_ver.end();++itr){
    if (w_hor.count(*itr)>0){
      sum += mp_hor[*itr]*mp_ver[*itr];
    }
  }
  cout << sum << endl;
  }
  return 0;
}

