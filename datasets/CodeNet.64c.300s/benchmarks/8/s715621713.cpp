#include <iostream>

using namespace std;

int main()
{
  int i=1;
  int n;
  int x=1;
  
  cin >> n;
//  cout <<"a\n";
  for(i=1;i<=n;i++)
  {
//  cout <<"a\n";
    x=i;
    if(x%3==0)
    {
      cout <<" " << i;
      continue;
    }
    
    do
    {
      if(x%10==3)
      {
        cout <<" " << i;
        break;
      }
      x=x/10;
    }while(x);
  }
  cout <<"\n";
}