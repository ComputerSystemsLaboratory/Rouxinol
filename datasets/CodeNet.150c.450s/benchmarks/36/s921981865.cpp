#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
  int d;
  int i,j;
  int h;

  while(scanf("%d", &d)!=EOF){
    int  sum=0;
    for(i=1;i<600/d;i++)
      sum+=d*d*d*i*i;
    cout<<sum<<endl;
  }
}