#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int N;
    while(cin>>N,N)
    {
        int w[202]={0};
        int h[202]={0};
        int n[202];
        int d[202];
        int lenwl=0;
        int lenwu=0;
        int lenhl=0;
        int lenhu=0;
        int t;
 
        for(int i=1;i<N;i++)
        {
            cin>>n[i]>>d[i];
            if(d[i]==0)
            {
                t=w[n[i]];
                w[n[i]]--;
                w[i]=w[n[i]];
                w[n[i]]=t;
                h[i]=h[n[i]];
            }
            else if(d[i]==1)
            {
                t=h[n[i]];
                h[n[i]]--;
                h[i]=h[n[i]];
                h[n[i]]=t;
                w[i]=w[n[i]];
            }
            else if(d[i]==2)
            { 
                t=w[n[i]];
                w[n[i]]++;
                w[i]=w[n[i]];
                w[n[i]]=t;
                h[i]=h[n[i]];
            }
            else
            {
                t=h[n[i]];
                h[n[i]]++;
                h[i]=h[n[i]];
                h[n[i]]=t;
                w[i]=w[n[i]];
            }
        }
        for(int i=0;i<=N;i++)
        {
            lenwl=min(lenwl,w[i]);
            lenwu=max(lenwu,w[i]);
            lenhl=min(lenhl,h[i]);
            lenhu=max(lenhu,h[i]);
        }
        cout<<lenwu-lenwl+1<<" "<<lenhu-lenhl+1<<endl;
    }
    return 0;
}