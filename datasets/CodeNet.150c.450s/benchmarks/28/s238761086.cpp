#include <iostream>
#include <cstdio>
using namespace std;
int w[100000];
int n,k;
int work(int p)
{
    int sum,i=0,j=k;
    while(j--)
    {
        sum=0;
        while(sum+w[i]<=p)
        {
            sum += w[i];
            i++;
            if(i==n)
                return n;
        }
    }
    return i;
}
int main()
{
    int i,left=0,right=1000000000,mid;
    cin>>n>>k;
    for(i=0;i<n;i++)
        //cin>>w[i];
        scanf("%d",&w[i]);
    while(right-left>1)
    {
        mid = (right+left)/2;
        if(work(mid)<n)
            left = mid;
        else
            right = mid;
    }
    cout<<right<<endl;
    return 0;
}