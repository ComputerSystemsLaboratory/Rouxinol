#include <iostream>
using namespace std;

int main()
{
  int a, i;
  i=0;
  while(1)
  {
    cin >>a;
    if(a==0){break;}
    else
    {
      i +=1;
      cout <<"Case "<<i<<": "<<a<<"\n"; 
    }
  }
  return 0;
}