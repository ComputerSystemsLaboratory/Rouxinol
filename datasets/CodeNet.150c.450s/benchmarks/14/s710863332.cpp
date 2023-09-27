#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    if(i%3==0)
    {
      cout<<' '<<i;
      continue;
    }
    int tmp=i;
    while(1)
    {
      if(tmp==0) break;
      if(tmp%10==3)
      {
        cout<<' '<<i;
        break;
      }
      tmp/=10;
    }
  }
  cout<<endl;
}