#include <iostream>
using namespace std;
long long fact(int n){
  if(n==2) return 2;
  return fact(n-1)*n;
}
 
int main(void){
  int n;
  cin >> n;
  cout << fact(n) << endl;
}