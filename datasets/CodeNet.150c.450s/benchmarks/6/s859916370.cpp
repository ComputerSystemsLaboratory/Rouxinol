#include<iostream>

using namespace std;

int main()
{
  int a,b,c;

  cin>>a;
  cin>>b;
  cin>>c;

  if(a<b && b<c)
    {
      cout<<"Yes";
    }
  else
    {
      cout<<"No";
    }

  cout<<'\n';

  return 0;
}

