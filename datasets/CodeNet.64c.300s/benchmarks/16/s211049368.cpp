#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> in;

  int min,ans= -1000000000;
  cin >> min;
  for(int i=0; i<n-1; i++){
    int a; cin >> a;
    if(ans < a - min) ans = a - min;
    if(min > a) min = a;
  }
  cout << ans << "\n";

}