#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> fibo(n+2);
  fibo[0]=1;
  fibo[1]=1;
  for(int i=2;i<n+2;i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
  }
  
  cout << fibo[n] << endl;
  return 0;
}