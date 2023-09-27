#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int k=10001;
  cin >> n;
  vector<unsigned short> A(n+1);
  vector<unsigned short> B(n+1);
  int C[10005];
  for(int i=0;i<10005;i++)C[i]=0;
  for(int j=1;j<=n;j++){
    cin >> A[j];
    C[A[j]]++;
  }
  //cout << 1 << endl;
  for(int i=1;i<=k;i++){
    C[i]=C[i]+C[i-1];
  }
  for(int j=1;j<=n;j++){
    B[C[A[j]]]=A[j];
    C[A[j]]--;
  }
  
  for(int i=1;i<=n;i++){
    if(i-1)cout << " ";
    cout << B[i];
  }
  cout << endl;
  return 0;
}

  