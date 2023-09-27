#include<iostream>
using namespace std;

int rec(int n, int sum, int max) {
  if(sum<0) return 0;
  if(!n&&!sum) return 1;
  int ans=0;
  for(int i = max+1; i<=9; ++i)
    ans += rec(n-1, sum-i, i);
  return ans;
}

int main() {
  int n,s;
  while(cin>>n>>s, n||s) {
    cout<<rec(n,s,-1)<<endl;
  }
}