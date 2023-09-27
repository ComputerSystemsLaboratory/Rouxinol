#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int n,k,w[100005];
bool pack(int p)
{
    int take=0,cars=0;
    for(int i=0;i<n;i++)
    {
        if(p<w[i])return true;
        if(take+w[i]<=p)take+=w[i];
        else
        {
            cars++;
            take=0;
            i--;
        }
    }
    if(take)cars++;
    return cars>k;
}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)scanf("%d",&w[i]);
    int l=0,r=1e9+5,m;
    while(l<r)
    {
        m=(l+r)/2;
        if(pack(m))l=m+1;
        else r=m;
    }
    cout<<l<<endl;
    return 0;
}
