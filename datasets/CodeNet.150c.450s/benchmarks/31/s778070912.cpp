#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n, ans, tmp = 1000000001, num;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> num;
    if(i == 1)
      ans = num - tmp;
    if(num >= tmp)
      ans = (num - tmp > ans) ? num - tmp : ans;
    else
      tmp = num;
  }
  cout << ans << endl;
}