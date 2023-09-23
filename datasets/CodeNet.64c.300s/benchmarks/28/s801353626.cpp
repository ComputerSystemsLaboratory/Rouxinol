#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int w,h,x,y,r;
    cin>>w>>h>>x>>y>>r;
    if(x+r<=w&&x-r>=0&&y+r<=h&&y-r>=0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}