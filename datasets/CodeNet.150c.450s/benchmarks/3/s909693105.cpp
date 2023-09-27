#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    string meirei,t;
    int a,b;
    cin>>meirei>>a>>b;
    if(meirei=="replace")
    {
      cin>>t;
      int l=str.length();
      str=str.substr(0,a)+t+str.substr(b+1,l-b);
    }
    if(meirei=="print")
    {
      string tmp=str.substr(a,b-a+1);
      cout<<tmp<<endl;
    }
    if(meirei=="reverse")
    {
      string tmp="";
      int l=str.length();
      for(int i=b;i>=a;i--)
        tmp+=str[i];
      str=str.substr(0,a)+tmp+str.substr(b+1,l-b);
    }
  }
}