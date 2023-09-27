#include <iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int operation(int x , int y , int z)
{
    int v = (x*x)+(y*y)+(z*z)+(x*y)+(y*z)+(x*z);
    return v;
}
int main()
{
    int n;
    cin >>n;
    int counter=0;
    for(int j =1; j<=n; j++)
    {
        for(int x=1; x<100; x++)
        {
            for(int y=1; y<100; y++)
            {
                for(int z=1; z<100; z++)
                {
                    if(j == operation(x,y,z))
                    {
                        counter++;
                    }
                    else if(j < operation(x,y,z))
                        break;

                }
            }
        }

        cout<<counter<<endl;
        counter=0;
    }

    return 0;
}