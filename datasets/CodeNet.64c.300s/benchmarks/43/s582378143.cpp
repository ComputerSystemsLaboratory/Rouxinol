
#include<iostream>
using namespace std;

int main()
{
  int S,T,a,b,c,d;
  cin>>a>>b>>c>>d;
  S=a+b+c+d;
  cin>>a>>b>>c>>d;
  T=a+b+c+d;
  S>=T?cout<<S<<endl:cout<<T<<endl;
}