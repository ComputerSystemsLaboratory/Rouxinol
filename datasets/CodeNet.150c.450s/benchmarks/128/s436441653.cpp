#include<iostream>
using namespace std;

int main()
{
  string s;

  cin>>s;
  for(int i=s.length()-1;0<=i;i--)cout<<s[i];
  cout<<endl;
  
  return 0;
}