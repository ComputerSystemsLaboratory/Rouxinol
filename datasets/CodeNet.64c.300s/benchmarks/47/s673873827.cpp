#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int data[100] = {};
  int n, m = 0;
  while(cin >> n)
    data[n - 1]++;
  for(int i = 1; i <= 100; i++)
    m = max(m, data[i - 1]);
  for(int i = 1; i <= 100; i++)
    if(m == data[i - 1])
      cout << i << endl;
  
  return 0;
}