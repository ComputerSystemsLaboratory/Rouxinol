#include <iostream>
#include<algorithm>
//#include<math.h>
#define MAX 1000000
using namespace std;
void minn(int e)
{
    int t=0;
    int mi[MAX]={0};
    for(int z=0;z*z*z<=e;z++)
        for(int y=0;y*y<=e-z*z*z;y++)
        {
            int x=e-z*z*z-y*y;
            //cout<<x<<y<<z<<endl;
            mi[t++]=x+y+z;
        }
     sort(mi,mi+t);
     cout<<mi[0]<<endl;
}
int main()
{
    int e;
    while(cin>>e)
    {
        if(e==0)
            break;
        minn(e);
    }
    return 0;
}

