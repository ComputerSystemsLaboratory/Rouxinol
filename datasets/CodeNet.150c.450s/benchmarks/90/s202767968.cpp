#include<iostream>
#define MAX 101
using namespace std;

int main()
{
  int n,m=0;
  int c[MAX]={};

  while(cin>>n)c[n]++;
  for(int i=0;i<MAX;i++)m=max(m,c[i]);
  for(int i=1;i<MAX;i++)if(m==c[i])cout<<i<<endl;
  
  return 0;
}