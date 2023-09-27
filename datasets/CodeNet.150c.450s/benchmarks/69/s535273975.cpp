#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<map>
#include<queue>
#include<cmath>
#include<stack>
#include<vector>
#include<cstdio>
#define MAXN 2555
#define INF 0x3f3f3f3f
#define v first
#define b second
using namespace std;
stack<int>q;
stack<int>p;
int s[15];
bool flag;
void dfs(int x)
{
   if(x==10)
   {
      flag=true;
      return ;
   }
   if(s[x]>q.top())
   {
      q.push(s[x]);
      dfs(x+1);
      q.pop();
   }
   if(s[x]>p.top())
   {
      p.push(s[x]);
      dfs(x+1);
      p.pop();
   }
   return ;
}
int main()
{
   int t;
   scanf("%d",&t);
   q.push(0);
   p.push(0);
   while(t--)
   {
      flag=false;
      for(int i=0;i<10;i++)
         scanf("%d",&s[i]);
      dfs(0);
      if(flag)
         cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   return 0;
}