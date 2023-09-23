#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  int ans = 100000;
  cin >> n;
  for(int i = 0; i < n; ++i){
    ans = ceil((ans * 1.05) / 1000.0) * 1000;
  }
  cout << ans << endl;
}