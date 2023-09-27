#include <iostream>
#include<string>

using namespace std;

int main()
{
  int m;
  int f;
  int r;
  
  while(1)
  {
    cin >> m >> f >> r;
    if(m==-1 && f== -1 && r==-1)
      break;
    if(m==-1 || f==-1)
      {
        cout << "F\n";
        continue;
      }
      
    if(m+f>=80)
      cout << "A\n";
    if(m+f>=65 && m+f<80)
      cout <<"B\n";
    if(m+f>=50 && m+f<65)
      cout <<"C\n";
    if(m+f>=30 && m+f<50)
    {
      if(r>=50)
        cout <<"C\n";
      else
        cout <<"D\n";
    }
    if(m+f<30)
      cout <<"F\n";
  }
}