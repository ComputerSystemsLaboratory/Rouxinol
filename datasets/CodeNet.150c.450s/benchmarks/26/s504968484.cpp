#include<iostream>

using namespace std;

int main()
{
  int a,b;

  cin>>a;
  cin>>b;

  if(a==b)
    {
      cout<<"a == b";
    }
  else if(a>b)
    {
      cout<<"a > b";
    }
  else
    {
      cout<<"a < b";
    }

  cout<<'\n';

  return 0;
}

