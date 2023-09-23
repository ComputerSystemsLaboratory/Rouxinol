#include <iostream>
using namespace std;
          
int main()
{
  int a[3];
  int b, i, j;
  cin >>a[1]>>a[2]>>a[3];
     
  for(j=1; j<=2; j++)
  {
    for(i=1; i<=3-j; i++)
    {
      if(a[i]>a[i+1])
      {
         b=a[i];
         a[i]=a[i+1];
         a[i+1]=b;
      }
    }
  }
     
  cout <<a[1]<<" "<<a[2]<<" "<<a[3]<<"\n";
       
  return 0;
}