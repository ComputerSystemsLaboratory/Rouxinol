#include <iostream>
using namespace std;
long long int rep(long long int n){
  if(n == 0)return 1;
  return n*rep(n-1);
}
int main(){
  long long int n;
  cin >> n;
  cout << rep(n) << endl;

}