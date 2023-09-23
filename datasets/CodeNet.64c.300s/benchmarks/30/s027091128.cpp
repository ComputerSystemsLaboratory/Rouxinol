#include <iostream>
using namespace std;

int minus_five(int f, int* money)
{
  if (*money >= f)
  {
    *money -= f;
    return 1;
  }
  return 0;
}

int minus_one(int o, int* money)
{
  int result = *money / o;
  *money = *money - result*o;
  return result;
}

int main(void)
{
  int pay;
  int coin;
  while (true)
  {
    cin >> pay;
    if ( pay == 0 ) break;
    pay = 1000 - pay;
    coin = 0;

    coin += minus_five(500, &pay);
    coin += minus_one (100, &pay);
    coin += minus_five( 50, &pay);
    coin += minus_one ( 10, &pay);
    coin += minus_five(  5, &pay);
    coin += minus_one (  1, &pay);

    cout << coin << endl;
  }
  return 0;
}