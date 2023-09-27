#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=1009;
int a[maxn];
int b[maxn];
int c[maxn];
int ln,lm,flag;
int t;
bool erjinzhi()
{
    for(int i=0;i<1024;i++)
    {
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        ln=0;
        lm=0;
        flag=1;
        for(int j=i,cnt=0;cnt<10;cnt++,j>>=1)
        {
            if(j&1)
            b[ln++]=a[cnt];
            else
            c[lm++]=a[cnt];
        }
        for(int k=1;k<ln;k++)
        {
            if(b[k-1]>b[k])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        for(int k=1;k<lm;k++)
        {
            if(c[k-1]>c[k])
            {
                flag=0;
                break;
            }
        }
        if(flag)return true;
    }
    return false;
}
int main()
{
    scanf("%d",&t);
    while(t--)
    {

     for(int i=0;i<10;i++)
     scanf("%d",&a[i]);
     bool fl=erjinzhi();
     if(fl)
     printf("YES\n");
     else
     printf("NO\n");
    }
    return 0;
}