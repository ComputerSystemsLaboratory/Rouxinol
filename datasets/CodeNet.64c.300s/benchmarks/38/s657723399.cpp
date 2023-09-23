#include<stdio.h>
#include<string.h>
int a[4][2]={1,0,0,1,-1,0,0,-1};
int b[500][500];
int sum=0;
char s[500][500];
int c[15];
int n,m;
bool check(int x,int y)
{
    if(x<0||y<0||x>=n||y>=m)
        return false;
    return true;
}
void dfs(int deep)
{

}
int main()
{


    while(~scanf("%d",&n))
    {
        while(n--)
        {
            for(int i=0;i<10;i++)
                scanf("%d",&c[i]);
            int ani=0,ans=0;
            int i=0;
            int temp=0;
            while(i!=10)
            {
                if(c[i]>ani)
                {
                    ani=c[i];
                }
                else if(c[i]>ans)
                {
                    ans=c[i];
                }
                else
                {
                    temp=1;
                }
                i++;
            }
            if(temp==0)
                puts("YES");
            else
                puts("NO");
        }
    }
    return 0;
}