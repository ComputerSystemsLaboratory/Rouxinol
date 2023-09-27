#include <iostream>

using namespace std;

int main()
{
  int x;
  int out;
  
  cin >> x;
  
  if(1<=x && x<=100)
    out=x*x*x;
    
  cout << out <<"\n";
} 