#include<algorithm>
#include<fstream>
#include<cstring>
#include<stdio.h>
using namespace std;
struct  pai{
  //char a;char b;
  char a[100];
}x[105],y[105];

bool cmp(pai o,pai p)
{
    return o.a[1]<p.a[1];
}
int main()
{
      int n;
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
          scanf("%s",x[i].a);
          strcpy(y[i].a,x[i].a);
      }
      //sort(x,x+n,cmp);
      for(int i=0;i<n;i++)
      {
          for(int j=n-1;j>0;j--)
          {
              if(x[j].a[1]<x[j-1].a[1])
                swap(x[j],x[j-1]);
          }
      }
      for(int i=0;i<n;i++)
      {
          if(i!=n-1)
          printf("%s ",x[i].a);
          else printf("%s\n",x[i].a);
      }
      printf("Stable\n");
      /*for(int i=0;i<n;i++)
      {
          if(i!=n-1)
          printf("%s ",y[i].a);
          else printf("%s\n",y[i].a);
      }*/
      for(int i=0;i<n;i++)
      {
          int k=i;
          for(int j=i;j<n;j++)
          {
              if(y[j].a[1]<y[k].a[1])
              {
                  k=j;
              }
          }
          swap(y[k],y[i]);
      }
      for(int i=0;i<n;i++)
      {
          if(i!=n-1)
          printf("%s ",y[i].a);
          else printf("%s\n",y[i].a);
      }
      for(int i=0;i<n;i++)
      {
          if(strcmp(x[i].a,y[i].a)!=0)
          {
              printf("Not stable\n");
              return 0;
          }
      }
      printf("Stable\n");
      return 0;
}