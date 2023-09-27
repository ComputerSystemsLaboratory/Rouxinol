#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
 
using namespace std;
 
int s[10]={0};
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        for(int i=0;i<10;i++)
            scanf("%d",&s[i]);
        int a=0,b=0;
        bool flag=0;
        for(int i=0;i<10;i++)
        {
            if(s[i]<a&&s[i]<b)
            {
                flag=1;
                break;
            }
            else if(s[i]<a&&s[i]>b)b=s[i];
            else if(s[i]>a&&s[i]<b)a=s[i];
            else
            {
                a=a>b?s[i]:a;
                b=a<b?s[i]:b;
                if(a==b)a=s[i];
            }
        }
        if(flag)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}

