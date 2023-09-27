#include<iostream>
using namespace std;

int main()
{
  int T,h,m,s;
  cin>>T;
  h=T/3600;
  T%=3600;
  m=T/60;
  s=T%60;
  cout<<h<<":"<<m<<":"<<s<<endl;
  return 0;
}