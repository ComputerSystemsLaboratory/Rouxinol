#include <iostream>
using namespace std;
int main()
{
  int x[10001];
  int a,n=0;
  while(1)
  {
    cin>>a;
    if(a==0)
      break;
    else
      {
        x[n]=a;
        n++;
      }
  }
    for(int i=0;i<n;i++)
    cout<<"Case "<<i+1<<": "<<x[i]<<endl;
    return 0;
}