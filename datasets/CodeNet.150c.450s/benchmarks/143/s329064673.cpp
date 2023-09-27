#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define PI 3.1415926535897932
#define MOD 1000000007;
using namespace std;
long long GCD(long long A,long long B){
  if(B==0){
    return A;
  }
  else{
    return GCD(B,A%B);
  }
}
long long LCM(long long A,long long B){
  long long g=GCD(A,B);
  return A/g*B;
}
long long num_order(long long X){
  long long ans=0;
  while(true){
    if(X==0){
      break;
    }
    else{
      X/=10;
      ans++;
    }
  }
  return ans;
}
int main() {
  
  int N;
  cin>>N;
  
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  sort(A.begin(),A.end());
  
  int Q;
  cin>>Q;
  
  vector<vector<int>> vec(Q,vector<int>(2));
  for(int i=0;i<Q;i++){
    cin>>vec[i][0]>>vec[i][1];
  }
  
  long long sum=0;
  for(int i=0;i<N;i++){
    sum+=A[i];
  }
  
  vector<int> app(100000,0);
  for(int i=0;i<N;i++){
    app[A[i]-1]++;
  }
  
  
  for(int i=0;i<Q;i++){
    sum=sum+(vec[i][1]-vec[i][0])*app[vec[i][0]-1];
    cout<<sum<<endl;
    app[vec[i][1]-1]+=app[vec[i][0]-1];
    app[vec[i][0]-1]=0;
  }
}