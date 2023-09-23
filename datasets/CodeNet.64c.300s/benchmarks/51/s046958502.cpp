#include <iostream>
using namespace std;

int main()
{
  long long int a;
  cin >> a;
  long long int ans = 1;
  for(int i=1; i<=a; i++){
    ans = ans*i;
  }
  cout << ans << endl;

  return 0;
}