#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int y,m,d;
        cin>>y>>m>>d;
        int ans=0;
        int sum=0;
        for(int i=1;i<y;i++)
        {
            if(i%3==0)sum+=200;
            else sum+=195;
        }
        if(y%3==0)sum+=20*(m-1);
        else
        {
            for(int i=1;i<m;i++)
            {
                if(i%2==0)sum+=19;
                else sum+=20;
            }
        }
        sum+=d;
        ans=196470-sum+1;
        cout<<ans<<endl;
    }
    return 0;
}