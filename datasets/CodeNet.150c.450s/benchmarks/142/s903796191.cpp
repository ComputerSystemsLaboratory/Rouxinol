#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int s=0;
  int tar=k;
  while(tar<n)
  {
    if(arr[s]<arr[tar])
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
    s++;
    tar++;


  }

  
  
}
