#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int k=1;k<=n;k++){
            int cnt=0;
    for (int i=1;i*i<=k;i++)
    {
        for (int j=1;j*j<=k;j++)
        {
            int x=i;
            int y=j;
            double c = (k-(x*x+y*y+x*y));
            c*=-1;
            int b = y+x;
            int z = max ( (-1*b+sqrt(b*b-4*c))/2 , (-1*b-sqrt(b*b-4*c))/2 );
            if ((x*x+y*y+z*z+x*z+x*y+y*z)==k&&z>0)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    }
    return 0;
}
