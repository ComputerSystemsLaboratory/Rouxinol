#include<iostream>
#include<algorithm>
using namespace std;
int partition(int a[],int n)
{
   int x=a[n-1];
   int i=-1;
   for(int j=0;j<n-1;j++)
   {
      if(a[j]<=x)
      {
         i++;
         swap(a[j],a[i]);
      }
   }
   swap(a[i+1],a[n-1]);
   return i+1;
}


int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
      cin>>a[i];
   int b=partition(a,n);
   for(int i=0;i<n;i++)
   {
      if(i>0)
         cout<<" ";
      if(i==b)
      {
         cout<<"["<<a[i]<<"]";
         continue;
      }
      cout<<a[i];
   }
   cout<<endl;
   return 0;
}