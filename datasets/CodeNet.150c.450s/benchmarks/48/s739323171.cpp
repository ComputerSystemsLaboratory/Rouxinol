#include<iostream>
#include<cmath>
using namespace std;
int solve(int E)
{
    int ans=3000000;
    int x;
    for(int y=0;y<=1000;++y)
        for(int z=0;z<=100;++z)
        {
            x=E-y*y-z*z*z;
            if((x+y+z<ans)&&(x>=0))
                ans=x+y+z;
        }
    return ans;
}
int main()
{
    int E;
    while(cin>>E&&E>0)
        cout<<solve(E)<<endl;
    return 0;
}
