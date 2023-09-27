#include<iostream>
using namespace std;
int main()
{
  long long int n,i,k;
  cin>>n>>k;
  long long int ar[n],temp1=1,temp2=1;
  for(i=0;i<n;i++)
    cin>>ar[i];
  for(i=k;i<n;i++)
  {
    if(ar[i]>ar[i-k])
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
    temp1=temp2;
  }
  return 0;
}  

      
  