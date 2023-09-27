#include <algorithm>
#include <cstring>
#include <map>
#include <iostream>

using namespace std;

bool maps[12][10002];
bool row[12];
int ans=0x7fffffff;
int r,c;
int r_c;
map<string,bool>prow;

int dfs(int st)
{
    for(int i=st;i<r;++i)
    {
        if(row[i])continue;
        else
        {
            row[i]=true;
            string str1="0000000000",str2="0000000000";
            for(int j=0;j<r;++j)
            {
                str1[j]=row[j]+'0';
                str2[j]=!row[j]+'0';
            }
            if(prow.count(str1)||prow.count(str2));
            else
            {
                prow[str1]=true;
                prow[str2]=true;
                int sun=0;
                for(int j=0;j<c;++j)
                {
                    int s=0;
                    for(int k=0;k<r;++k)
                        s+=(maps[k][j]^row[k]);
                    sun+=min(s,r-s);
                    if(sun>ans)break;
                }
                ans=min(ans,sun);
            }
            dfs(st+1);
            row[i]=false;
        }
    }
    return 0;
}

int main()
{
    while(scanf("%d%d",&r,&c),r+c)
    {
        r_c=r*c;
        prow.clear();
        memset(maps,0,sizeof(maps));
        memset(row,0,sizeof(row));
        ans=0x7fffffff;
        for(int i=0;i<r;++i)
            for(int j=0;j<c;++j)
                scanf("%d",&maps[i][j]);
        dfs(0);
        printf("%d\n",r_c-ans);
    }
    return 0;
}
