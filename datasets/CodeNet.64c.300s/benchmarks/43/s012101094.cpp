#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int a, b, c, d, ans = 0;
  while(cin >> a >> b >> c >> d) ans = max( ans, a + b + c + d);
  cout << ans << endl;
}