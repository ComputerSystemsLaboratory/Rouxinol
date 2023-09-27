#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int n;
    cin>>n;
    
    int a[10050]={0};
    for(int i=1;i<105;i++)
    {
        for(int j=1;j<105;j++)
        {
            for(int k=1;k<105;k++)
            {
                int v= i*i + j*j + k*k + i*k + k*j + j*i;
                if( v < 10050)
                a[v  ]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i] <<'\n';
    }
}