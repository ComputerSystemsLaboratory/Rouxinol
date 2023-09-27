#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int n, k;
long long int w[100000];
int check(long long int mid) {
  int i = 0;
  for(int j = 0; j < k; j++) {
    long long int s = 0;
    while(s + w[i] <= mid) {
      s += w[i];
      if(++i == n) return n;
    }
  }
  return i;
}
int solve() {
  long long left = 0, right = 100000 * 10000, mid;
  while(1 + left < right){
    mid = (left + right) / 2;
    if(n <= check(mid)) right = mid;
    else left = mid;
  }
  return right;
}
int main() {
  cin>>n>>k;
  for(int i = 0; i < n; i++) scanf("%lld",&w[i]);
  cout<< solve() <<endl;
  return 0;
}

