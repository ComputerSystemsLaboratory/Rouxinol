#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,x,y,r;
    scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
    bool f=true;
    if(x+r>w)f=false;
    if(y+r>h)f=false;
    if(r>x)f=false;
    if(r>y)f=false;
    if(f==true)printf("Yes\n");
    else printf("No\n");
}