#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
  int n;
  int a[10000];
  int i;
  int min;
  int max;
  long long sum=0;
  
  cin >> n;
  
  for(i=0;i<n;i++)
    {
    cin >> a[i];
    sum=sum+a[i];
    }
  
  max=a[0];
  min=a[0];
  
  for(i=0;i<n;i++)
    {
    if(a[i]<=min)
      min=a[i];
    if(a[i]>=max)
      max=a[i];
    }
  
  cout << min <<" "<< max <<" "<< sum <<"\n";
}