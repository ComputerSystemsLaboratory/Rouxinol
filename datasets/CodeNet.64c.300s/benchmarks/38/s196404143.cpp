#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <string>
#include <set>
#include <functional>
#include <numeric>
#include <sstream>
#include <stack>
#include <map>
#include <queue>
using namespace std;

int arr[15],used[15];

void dfs(int pre,int cur)
{
    if(cur<10&&arr[pre]<arr[cur])
    {
        used[cur]=1;
        dfs(cur,cur+1);
    }
    else if(cur<10&&arr[pre]>=arr[cur])
        dfs(pre,cur+1);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        bool judge=false;
        for(int i=0;i<10;i++)
            scanf("%d",&arr[i]);
        for(int i=0;i<10;i++)
        {
            memset(used,0,sizeof(used));
            used[i]=1;
            dfs(i,i+1);
            int pre=0;
            judge=false;
            for(int j=0;j<10;j++)
            {
                if(!used[j])
                {
                    if(pre>=arr[j])
                    {
                        judge=true;
                        break;
                    }
                    pre=arr[j];
                }
            }
            if(!judge)
            {
                printf("YES\n");
                break;
            }
        }
        if(judge) printf("NO\n");
    }
   return 0;
}