#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int r;
    while(cin>>n>>r,n)
    {
        int isi;
        int num[50]={0};
        int t=0;
        isi=r;
        while(true)
        {
            if(isi==0)
            {
                isi=num[t];
                num[t]=0;
                t++;
            }
            else if(isi>0)
            {
                num[t]++;
                isi--;
                t++;
            }
            if(t==n)t=0;
            if(isi==0)
            {
                int cnt=0;
                for(int i=0;i<n;i++)
                {
                    if(num[i]==0)cnt++;
                }
                if(cnt==n-1)break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(num[i]!=0)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
 