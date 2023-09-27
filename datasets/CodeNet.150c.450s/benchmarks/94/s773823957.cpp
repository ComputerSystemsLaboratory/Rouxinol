#include<bits/stdc++.h>
using namespace std;
int num[105]={0};
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
        scanf("%d",&num[i]);
    for(int i = 1 ; i <= n ; i++)
      for(int j = n ; j >= 1; j--)
      {
          if(num[j]<num[j-1])
          {
              swap(num[j],num[j-1]);
              cnt++;
          }
      }
    for(int i = 1 ; i <= n ; i++)
    {
        printf("%d",num[i]);
        if(i<n)
          printf(" ");
    }
    printf("\n%d\n",cnt);
    return 0;
}

