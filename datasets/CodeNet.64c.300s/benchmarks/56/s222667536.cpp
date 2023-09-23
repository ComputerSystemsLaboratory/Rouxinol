#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n,y,m,d;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&y,&m,&d);
        int t = 0;
        if(y%3 == 0 )
        {
            t += 200 - ((m -1)* 20 + d);
        }
        else
        {
             t += 195 - ((m -1)* 20 + d) +(m-1)/2;
        }
        int y3=0,y1=0;
        for(int i = y+1; i < 1000; i++)
        {
            if(i%3==0)
                y3++;
            else
                y1++;
        }
        t += y3 * 200 + y1 * 195;
        printf("%d\n",t+1);
    }
    return 0;
}