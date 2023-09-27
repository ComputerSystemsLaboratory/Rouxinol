
#include <bits/stdc++.h>
using namespace std;

int check(int n,long long P,int k,vector<int> w){
  int i = 0;
  for(int j=0;j<k;++j){
    long long s = 0;
    while(s + w.at(i) <= P){
      s += w.at(i);
      i++;
      if(i == n) return n;
    }
  }
  return i;
}

long long solve(int n,int k,vector<int> w){
  long long left = 0;
  long long right = n * 10000;
  long long mid;

  while(right - left > 1){
    mid = (left + right) / 2;
    int v = check(n,mid,k,w);
    if(v >= n){
      right = mid; 
    }else{
      left = mid; 
    }
  }
  return right;
}

int main(){
  int n,k;
  long long ans;
  cin >> n >> k;
  vector<int> w(n);
  for(int i=0;i<n;++i){
    cin >> w.at(i);
  }
  ans = solve(n,k,w);
  cout << ans << endl;
  return 0;
}

