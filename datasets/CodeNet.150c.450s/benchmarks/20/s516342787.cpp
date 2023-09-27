#include <iostream>
using namespace std;

int main()
{
  int a,b,bb,c,d = 0;
  
  cin >> a;
  
  b = a/3600;
  bb = a%3600;
  cout << b << ":" ;

  c = bb / 60;
  cout << c << ":";

  d = bb%60;
  cout << d << endl;
}

  
  