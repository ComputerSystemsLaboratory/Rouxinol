#include<iostream>

using namespace std;

int main()
{
  string x;

  cin >> x;

  
  while ( x != "0")
    {

      int sum = 0;
  
      for ( int i = 0; i < (int)x.size(); i++)
        {
          sum += x[i] - '0';
        }
      cout << sum << endl;
      cin >> x;
    }
  
  return 0;
}