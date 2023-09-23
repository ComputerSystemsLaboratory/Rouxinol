#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<stack>
#include<vector>
#include<queue>
#include<string>
#include<cmath>
#define MAXN 10005
using namespace std;
int num[10];
int numl[10],numr[10];
bool charge[10];
int main()
{
   int n;
     scanf("%d",&n);
   while(n--){
    for(int i=0;i<10;i++)
    {
      scanf("%d",&num[i]);
      charge[i]=false;
    }
    int left=num[0],right=0,count1=1;
     charge[0]=true;
    for(int j=1;j<10;j++)
    {
       if(!charge[j]&&num[j]>left)
        {
         left=num[j];
         count1++;
         charge[j]=true;
        }
    }
     for(int j=0;j<10;j++)
    {
       if(!charge[j]&&num[j]>right)
        {
         right=num[j];
         count1++;
         charge[j]=true;
        }
    }
    if(count1!=10) printf("NO\n");
    else printf("YES\n");
   }
    return 0;
}