#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int S = 0;
  int a,b,c,d;
  for(int i=0;i<2;i++) {
    cin >> a >> b >> c >> d;
    S = max(S,a+b+c+d);
  }
  cout << S << endl;
}