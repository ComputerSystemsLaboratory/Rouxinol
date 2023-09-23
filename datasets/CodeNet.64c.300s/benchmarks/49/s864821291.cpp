#include <iostream>
using namespace std;

int main()
{
  long n1, n2;
  int ans = 0;
  while(cin >> n1 >> n2){
    long sum = n1 + n2;
    ans = 0;
    while(sum > 0){
      sum /= 10;
      ans++;
    }
    ans = (n1 == 0 & n2 == 0) ? 1 : ans;
    cout << ans << endl;
  }
}
    