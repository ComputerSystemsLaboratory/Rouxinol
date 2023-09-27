#include <bits/stdc++.h>
using namespace std;
int main()
{
    int e;
    cin >>e;

    while(e)
    {
        int x=0;
        int y=0;
        int z=0;
        int m=0;
     for(z=0;z*z*z<=e;z++)
        for(y=0;z*z*z+y*y<=e;y++)
        {
            x = e-z*z*z-y*y;
            if(x<0)
                continue;

                int t = x+y+z;
                if(m ==0||m>t)
                    m=t;
            }

        cout <<m<<endl;




        cin >>e;
    }
    return 0;
}

