#include<iostream>
using namespace std;
long long int loop(long long int);
int main(){
  int n;
  long long int ans;
  cin >> n;
  ans=loop(n);
  cout << ans << endl;
}

long long int loop(long long int n){
  if(n==1){
    return 1;
  }
  return n*loop(n-1);
}