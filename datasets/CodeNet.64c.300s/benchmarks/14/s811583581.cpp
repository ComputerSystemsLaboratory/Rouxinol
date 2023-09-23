#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  
  cin >> a >> b;
  if(-1000<=a && b<=1000)
    {
    if(a>b)
    cout << "a > b\n";
    if(a<b)
    cout << "a < b\n";
    if(a==b)
    cout << "a == b\n";
    }
} 