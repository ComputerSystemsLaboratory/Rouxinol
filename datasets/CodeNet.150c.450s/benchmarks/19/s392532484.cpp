#include <iostream>

using namespace std;

int main()
{
int i;
int a;
int b;

for(i=0;i<10000;i++)
  {
    cin >> a >>b;
    if(a==0 && b==0)
      break;
    if(a>b)
      cout << b <<" "<< a <<"\n";
    else
      cout << a <<" "<< b <<"\n";
  }
}