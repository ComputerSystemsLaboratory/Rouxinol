#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int pri[1000000];
int sz;

void get_pri()
{
    sz=0;
    for(int i=2;i<=999999;i++)
    {
        int ok=0;
        for(int j=2;j*j<=i;j++)
            if(i%j==0){
                ok=1;
                break;
            }
        if(ok==0)
            pri[sz++]=i;
    }
}

int main()
{
    int n;
    get_pri();
    while(scanf("%d",&n)!=EOF)
    {
        int pos=lower_bound(pri,pri+sz,n)-pri;
        if(pri[pos]==n)
            printf("%d\n",pos+1);
        else
            printf("%d\n",pos);
    }
    return 0;
}