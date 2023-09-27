#include <iostream>
using namespace std;
 
bool isInclude3(int n)
{
  while(n){
    if(n % 10 == 3) return true;
    n /= 10;
  }
  return false;
}
 
int main()
{
  int n;
  cin >> n;
  for(int i=1; i<=n; i++){
    if(i % 3 == 0 || isInclude3(i)) cout << " " << i;
  }
  cout << endl;
  return 0;
}