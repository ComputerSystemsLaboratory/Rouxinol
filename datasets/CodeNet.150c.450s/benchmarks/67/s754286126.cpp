#include<bits/stdc++.h>
using namespace std;
int main()
{
  while(true)
  {
    int N;
    int count=0;
    cin>>N;
    if(N==0)
    {
      break;
    }
    int A[1001];
    int subsum[1001]={0};
    for(int i=1;i<=1000;i++)
    {
      A[i]=i;
    }
    for(int i=1;i<=N-1;i++)
    {
      for(int k=i;k<=N;k++)
      {
        subsum[i]=subsum[i]+A[k];
        if(subsum[i]==N)
        {
          count++;
        }
      }
    }
    cout<<count<<endl;
  }
  return 0;
}

