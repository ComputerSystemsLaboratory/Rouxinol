#include <iostream>
using namespace std;

int isPrime(int x){
  for(int i=2; i*i<=x; i++){
    if(x%i == 0) return 0;
  }
  return 1;
}

int main(){
  int n; cin >> n;
  int ans=0;
  for(int i=0; i<n; i++){
    int x; cin >> x;
    ans += isPrime(x);
  }
  cout << ans << "\n";
}