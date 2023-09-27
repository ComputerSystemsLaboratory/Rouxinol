#include <iostream>
using namespace std;
int main()
{
  char s[201];
  char p[101];
  cin.getline(s,101);
  cin.getline(p,101);
  int ns=0,np=0;
  for(int i=0;s[i];i++)
    ns++;
  for(int i=0;p[i];i++)
    np++;
  for(int i=ns;i<2*ns;i++)
    s[i]=s[i-ns];
  s[2*ns]='\0';

  int i,j;
  for(i=0;i<2*ns-np;i++)
  {
    for(j=0;j<np;j++)
      if(s[i+j]!=p[j]) break;
    if(j==np)
    {
      cout<<"Yes"<<endl;
      break;
    }
  }
  if(i==2*ns-np)
    cout<<"No"<<endl;
}