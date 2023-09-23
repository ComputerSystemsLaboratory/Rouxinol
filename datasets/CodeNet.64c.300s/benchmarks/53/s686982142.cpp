#include <iostream>
using namespace std;

int main(void)
{
  int a,b,c,k,n;
  cin >> a >> b >> c;
  n=0;
  for(k=a;k<=b;k++){
    if(c%k == 0)
      n=n+1;
  }
  cout << n << endl;
  return 0;
}