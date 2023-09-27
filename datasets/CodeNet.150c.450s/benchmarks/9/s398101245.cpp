#include <iostream>
#include <string>
using namespace std;
string shuffle(string, int);
int main()
{
  while(1)
  {
    string s;
    cin>>s;
    if(s=="-") break;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
      int n;
      cin>>n;
      s=shuffle(s,n);
    }
    cout<<s<<endl;
  }
}

string shuffle(string s, int n)
{
  int l=s.length();
  s=s+s;
  s=s.substr(n,l);
  return s;
}