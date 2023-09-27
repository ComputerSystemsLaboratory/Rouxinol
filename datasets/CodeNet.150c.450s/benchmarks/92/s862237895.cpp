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
  int x=0,y=0;
  int sum=0;

  while(scanf("%d %d",&x, &y)!=EOF)
    {
      sum=x+y;
      i=1;
      while(sum>=10)
        {
          sum/=10;
          i++;
	}

      printf("%d\n", i);
    }
}