#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,co=0;
    double he=0;
    while(cin>>n){
        he=sqrt(n);
        int ser[n+1];
        for(int i=2;i<=n;i++)ser[i]=1;
        for(int i=2;i<=he;i++)if(ser[i]==1)for(int j=2;j*i<=n;j++)ser[i*j]=0;
        for(int i=2;i<=n;i++)if(ser[i]==1)co++;
        cout<<co<<endl;
        co=0;
    }
}