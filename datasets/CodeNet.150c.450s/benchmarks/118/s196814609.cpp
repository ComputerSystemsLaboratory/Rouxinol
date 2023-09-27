#include<iostream>
using namespace std;
int main()
{
    int n,y,m,d,ans;
   cin>>n;
   int sum[2];
   sum[0]=195;
   sum[1]=200;
   while(n--)
 {
   cin>>y>>m>>d;
   ans=0;
   for(int i=y+1;i<=999;i++)
   {
    if(i%3==0)    ans+=sum[1];
    else
     ans+=sum[0];
   }
   if(y%3==0) 
   {
     ans+=(10-m)*20;
     ans+=20-d;
   }
   else
   {
     for(int i=m+1;i<=10;i++)
     {
      if(i%2!=0) ans+=20;
      else
      ans+=19;
     } 
     if(m%2!=0) ans+=20-d;
     else
      ans+=19-d;
   }
   cout<<ans+1<<endl;
  }
  return 0;
}
   