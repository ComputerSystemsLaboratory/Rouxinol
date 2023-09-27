#include<iostream>
using namespace std;
int main()
{
  int n;
  long long int ans = 1;
  cin >> n;
  for(int i = 1;i <= n;i++){
    ans *= i;   
  }
  if(n == 0)cout << 0 << endl;
  else cout << ans << endl;
}
  