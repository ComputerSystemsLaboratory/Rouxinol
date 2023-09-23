#include<iostream>

using namespace std;

int main()
{
  int x, n = 1;

  while ( cin >> x && x != 0 )
    {
      cout << "Case " << n++ << ": " << x << endl;
    }
}