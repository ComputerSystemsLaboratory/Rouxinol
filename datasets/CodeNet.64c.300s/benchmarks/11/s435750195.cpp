#include<iostream>
using namespace std;

int main()
{
  int S,h,m,s;
  cin>>S;
  h=S/60/60;
  m=S/60-h*60;
  s=S-h*60*60-m*60;
  cout<<h<<':'<<m<<':'<<s<<"\n";
  return(0);
}

