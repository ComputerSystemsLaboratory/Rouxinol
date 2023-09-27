#include <iostream>
using namespace std;
int main()
{
  int s;
  int t,m,ss;

  cin>>s;

  t=s/3600;
  m=s%3600/60;
  ss=s%3600%60;

  cout<<t<<":"<<m<<":"<<ss<<'\n';
  return 0;
}

