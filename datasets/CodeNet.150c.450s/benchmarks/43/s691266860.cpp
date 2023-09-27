#include <iostream>
using namespace std;
       
int main()
{
  while(1){ 
  int i, n, x, y;
  cin >>n;
     
  if(n==0){break;}
  else
  {
  x=0; 
  y=0;
       
  int a[n], b[n];
         
  for(i=1;i<=n;i++)
  {
    cin >>a[i]>>b[i];
    if(a[i]>b[i])
    {
      x += a[i]+b[i];
    }
    else if(a[i]<b[i])
    {
      y += a[i]+b[i];
    }
    else
    {
      x += a[i];
      y += b[i];
    }
   } cout <<x<<" "<<y<<"\n";
  }}
       
      
       
  return 0;
}