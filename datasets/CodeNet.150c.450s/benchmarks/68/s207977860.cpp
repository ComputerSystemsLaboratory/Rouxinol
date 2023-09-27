#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  while(1){
    cin >> n;
    if(n == 0) break;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    int ans = INT_MAX;
    for(int i = 1; i < n; i++)
      ans = min(a[i]-a[i-1], ans);
    cout << ans << endl;
  }
}