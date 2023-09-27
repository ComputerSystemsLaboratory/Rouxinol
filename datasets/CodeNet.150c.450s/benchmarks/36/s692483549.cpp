#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void)
{
  int d=0;
  int i=0;
  int sq=0;

  while(scanf("%d", &d)!=EOF)
    {
      sq=0;
      for(i=d;i<600;i+=d)
	sq+=d*i*i;
      cout<<sq<<endl;
    }

}