#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[4]={0};
  string s[4]={"AC","WA","TLE","RE"};
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    string t;
    cin>>t;
    for(int j=0;j<4;j++)
    {
      if(t==s[j]) a[j]++;
    }
  }
  cout<<"AC x "<<a[0]<<"\n";
  cout<<"WA x "<<a[1]<<"\n";
  cout<<"TLE x "<<a[2]<<"\n";
  cout<<"RE x "<<a[3]<<"\n";
  return 0;
}