//Sum of Consecutive Integers
#include<bits/stdc++.h>
using namespace std;

bool solve(int i, int n){
  int sum=0;
  for( ; sum<n; i++){
    sum+=i;
    if(sum==n)return true;
  }
  return false;
}

int main(){
  while(true){
    int N;
    cin>>N;
    if(N==0)break;
    int ans=0;
    for(int i=1; i<N; i++){
      if(solve(i, N))ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}