#include <iostream>
using namespace std;

int a, b;


void solve(){
  int r = 1;
  while ( r != 0){
    int tmp = b;
    r = a % b;
    a = tmp;
    b = r;
  }
  cout << a << endl;
  return ;
}
int main(){
  cin >> a >> b;
  solve();
  return 0;
}