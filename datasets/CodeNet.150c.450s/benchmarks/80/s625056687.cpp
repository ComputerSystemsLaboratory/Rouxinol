#include <iostream>
using namespace std;

int main(void)
{
  int buf;
  int a_sum = 0;
  int b_sum = 0;
  for (int i = 0; i < 4; i++)
  {
    cin >> buf;
    a_sum += buf;
  }

  for (int i = 0; i < 4; i++)
  {
    cin >> buf;
    b_sum += buf;
  }

  cout << ( a_sum < b_sum ? b_sum : a_sum) << endl;
  return 0;
}