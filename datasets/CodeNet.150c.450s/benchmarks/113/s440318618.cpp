#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
  int i=1, x;
  do {
    cin >> x;
    if (x>0)
        printf("Case %d: %d\n", i, x);
    i++;
  }while(x>0);

  return 0;
}