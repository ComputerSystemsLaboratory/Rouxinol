#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void)
{
  char a[2][3];
  int n;
  int i;
  int j=0;

  while(1)
    {
      cin>>n;
      j=0;
      a[0][0]=a[1][0]=0;

      if(n==0)
        return 0;

      for(i=0;i<n;i++)
        {
          scanf("%s", a[i%2]);
          if(i%2==1)
            if(a[0][0]+a[1][0]=='r'+'l')
              j++;
        }

      printf("%d\n", j);
    }

  return 0;
}