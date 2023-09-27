#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int ma[11];
int a[11];int b[11];

bool ch;

int dx[]={1,0,0,-1};
int dy[]={0,-1,1,0};

void dfs(int deep,int aa,int bb)
{
    if(ch)return ;
    if(deep==10)
    {
        ch=true;
        return ;
    }


    if(ma[deep]>a[aa-1])
    {
        a[aa]=ma[deep];
        dfs(deep+1,aa+1,bb);
    }

    if(ch==false&&ma[deep]>b[bb-1])
    {
        b[bb]=ma[deep];
        dfs(deep+1,aa,bb+1);
    }

}


int main()
{
    int f;
    scanf("%d",&f);
    while(f--)
    {
        ch=false;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<10;i++)
            scanf("%d",&ma[i]);
        dfs(0,1,1);
        if(ch)
            printf("YES\n");
        else
            printf("NO\n");
    }


}