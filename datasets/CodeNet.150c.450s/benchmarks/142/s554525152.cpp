#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  int a[N];
  int i,j,c=0;
  long long int ans[2]={1,1};
  for(i=0;i<N;i++){
    cin >> a[i];
  }
  
  for(i=0;i+K<N;i++){
    if(a[i]<a[i+K]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  
  return 0;
}