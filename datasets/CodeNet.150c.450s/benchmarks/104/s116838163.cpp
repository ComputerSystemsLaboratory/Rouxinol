#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void)
{
  int w=0;
  int n=0;
  int v[50]={};
  int i=0;
  int a=0;
  int b=0;

  for(i=0;i<50;i++)
    v[i]=i+1;

  cin>>w>>n;

  for(i=0;i<n;i++)
    {
      scanf("%d,%d", &a, &b);
      swap(v[a-1],v[b-1]);
    }

  for(i=0;i<w;i++)
    {
      cout<<v[i]<<endl;
    }

}