#include <iostream>
using namespace std;


int main()
{
          int a,b,c,temp;

          cin >> a >> b >> c;

          while(1)
          {
                  if((a < b && b < c) || (a == b && b < c ) || (a == b && b == c ))
                              break;
                  else if(b < a)
                  {
                            temp = b;
                            b = a;
                            a = temp;
                  }
                  else if(c < b)
                  {
                            temp = c;
                            c = b;
                            b = temp;
                  }
                  else if(c < a)
                  {
                            temp = c;
                            c = a;
                            a = temp;
                  }
          }
          cout << a << " " << b << " " << c << endl;
          return 0;
}