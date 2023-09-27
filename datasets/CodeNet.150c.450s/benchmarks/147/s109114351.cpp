#include<bits/stdc++.h>
using namespace std;

const int N=1e4+5;
int frr[N];

int main()
{
    int n;
    cin>>n;

    int cnt=0;

    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            for(int k=1;k<=100;k++)
            {
                long long  p=(i*i)+(j*j)+(k*k)+(i*j)+(j*k)+(k*i);
                if(p<=N) frr[p]++;
                //cnt++;
            }
        }
    }

   // cout<<cnt<<endl;
    for(int i=1;i<=n;i++)cout<<frr[i]<<endl;
}
