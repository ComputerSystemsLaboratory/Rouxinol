#include <iostream>
using namespace std;

int n,a[21];

int solve(int i,int m){
  if(m==0) return true;
  if(i==n) return false;
  return solve(i+1,m)||solve(i+1,m-a[i]);
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++) cin >> a[i];
  int q; cin >>q;
  int m[q];
  for(int i=0;i<q;i++){
    cin >> m[i];
    if(solve(0,m[i])) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}