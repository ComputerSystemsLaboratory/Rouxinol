#include<cstdio>

using namespace std;

void changing(int n,int a);
char num[100000];
char chg[100000][2];

int main(void)
{
   int n,m;
   char kari;
   while(scanf("%d",&n))
   {
      if(n == 0) break;
      scanf("%c",&kari);
      for(int i = 0;i < n;i++)
      {
         scanf("%c%c%c",&chg[i][0],&kari,&chg[i][1]);
         scanf("%c",&kari);
      }

      scanf("%d",&m);
      scanf("%c",&kari);
      for(int i = 0;i < m;i++)
      {
         scanf("%c",&num[i]);
         scanf("%c",&kari);
      }
      num[m] = 0;
      for(int i = 0;i < m;i++)
      {
         changing(n,i);
      }
      printf("%s\n",num);
   }
}


void changing(int n,int a)
{
   for(int i = 0;i < n;i++)
   {
      if(num[a] == chg[i][0])
      {
         num[a] = chg[i][1];
         return;
      }
   }
}