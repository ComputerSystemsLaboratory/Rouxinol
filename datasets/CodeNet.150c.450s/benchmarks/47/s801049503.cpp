#include<bits/stdc++.h>
int main()
{
    long long w,h,x,y,r,f=0;
    scanf("%lld%lld%lld%lld%lld",&w,&h,&x,&y,&r);
    if(x-r<0)
        f=1;
    if(x+r>w)
        f=1;
    if(y-r<0)
        f=1;
    if(y+r>h)
        f=1;
    if(f==0)
        printf("Yes\n");
    else if(f==1)
        printf("No\n");
    return 0;
}