#include<bits/stdc++.h>
using namespace std;
int n,a[50];
int solve(int i,int m){
  if(m==0)return 1;
  if(i>=n)return 0;
  int re = solve(i+1,m)||solve(i+1,m-a[i]);
  return re;
}
int main(){
  int m,x;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  cin >> m;
  for(int i=0;i<m;i++){
    cin >> x;
    if(solve(0,x))cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}