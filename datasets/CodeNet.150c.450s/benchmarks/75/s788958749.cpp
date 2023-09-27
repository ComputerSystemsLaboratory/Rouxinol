#include<iostream>
#include<cstdio>
#define MAX 2000000
using namespace std;
int H,a[MAX+1];
void max(int i)
{
  int l,r,large;
  l = 2*i;
  r = 2*i+1;
  if(l<=H&&a[l]>a[i])
    large = l;
  else large = i ;
  if(r<=H&&a[r]>a[large])
     large = r;
  if(large != i)
{  swap(a[i],a[large]);
  max(large);
  }
}
int main ()
{
   cin>>H;
   for(int i = 1;i<=H;i++) cin>>a[i];
   for(int i = H/2;i>=1;i--)
      max(i);
   for(int i = 1;i<=H;i++)
     cout<<" "<<a[i];
  cout<<endl;
  return 0 ;
  }
