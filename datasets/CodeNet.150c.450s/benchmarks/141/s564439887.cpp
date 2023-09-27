#include <cstdio>
#include <cmath>
#include <set>
#include <map>
#include <cstring>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <iterator>
#include<math.h>
#define debug() puts("what the fuck")
#define ll long long
#define INF 0x3f3f3f3f
using namespace std;
int main()
{
    double ax,ay,bx,by,cx,cy,px,py,mx,my,nx,ny,a1x,a1y,b1x,b1y,c1x,c1y;
    while(cin>>ax>>ay>>bx>>by>>cx>>cy>>px>>py)
    {
        mx=bx-ax;my=by-ay;
        nx=cx-ax;ny=cy-ay;
        a1x=ax-px;a1y=ay-py;
        b1x=bx-px;b1y=by-py;
        c1x=cx-px;c1y=cy-py;
        if(abs(abs(mx*ny-my*nx)-(abs(a1x*b1y-b1x*a1y)+abs(a1x*c1y-c1x*a1y)+abs(c1x*b1y-b1x*c1y)))<=1e-6)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}

