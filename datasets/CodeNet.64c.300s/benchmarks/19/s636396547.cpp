#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<string>
#include<math.h>
typedef long long LL;
using namespace std;
int main()
{
  //  freopen("test.txt", "r", stdin);
  //  freopen("testout.txt", "w", stdout);
    int n=0;
    LL x,max_sum,cur_sum;
    while(~scanf("%d",&n)&&n)
    {
        x=0;
        cur_sum=0;
        max_sum=-99999999;
        while(n--)
        {
            cin>>x;
            cur_sum+=x;
            if(max_sum<cur_sum)
                max_sum=cur_sum;
            if(cur_sum<0)
                cur_sum=0;
        }
        cout<<max_sum<<endl;
    }
    return 0;
}
