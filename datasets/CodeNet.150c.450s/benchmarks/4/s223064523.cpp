#include <iostream>
using namespace std;
int main()
{
  int m,f,r;
  char g;
  while(1)
  {
    cin>>m>>f>>r;
    if(m==-1&&f==-1&&r==-1) break;
    if(m==-1||f==-1)
      g='F';
    else
    {
      if ((m+f)>=80)
        g='A';
      else if ((m+f)>=65)
        g='B';
      else if ((m+f)>=50)
        g='C';
      else if ((m+f)>=30)
      {
        g='D';
        if(r>=50)
          g='C';
      }
      else
        g='F';
    }
    cout<<g<<endl;
  }
}