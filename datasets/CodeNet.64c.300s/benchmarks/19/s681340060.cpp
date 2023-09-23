#include<cstdio>
using namespace std;

void saiki(int num,int sum);

int term[10000],n,ans;

int main(void)
{
   while(scanf("%d",&n))
   {
      ans = -100000000;
      if(n == 0) break;
      for(int i = 0;i < n;i++) scanf("%d",&term[i]);
      for(int i = 0;i < n;i++) saiki(i+1,term[i]);

      printf("%d\n",ans);
   }
   return 0;
}

void saiki(int num,int sum)
{
   if(ans < sum) ans = sum;
   if(num >= n) return;
   saiki(num+1,sum+term[num]);

}