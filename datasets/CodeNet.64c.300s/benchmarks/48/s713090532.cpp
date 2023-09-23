#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void)
{
  int i=0;
  int j=0;
  int n=0;
  int a[1000000]={};
  int sum=0;

  while(scanf("%d",&n)!=EOF)
    {
      for(i=0;i<1000000;i++)
        a[i]=1;
      sum=0;

      for(i=2;i<=n;i++)
        {
          if(a[i-1]==0)
            continue;
	  for(j=2;j<=n/i;j++)
            a[i*j-1]=0;
	}

      for(i=1;i<n;i++)
	sum+=a[i];

      cout<<sum<<endl;

    }


  return 0;

}