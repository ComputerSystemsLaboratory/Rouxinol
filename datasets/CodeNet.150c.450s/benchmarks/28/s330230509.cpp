#include<iostream>
using namespace std;
int n,k;
long long T[100000];

int check(long long p)
{
    int i=0;

    for( int j=0;j<k;j++)
    {
        long long s=0;
        while(s+T[i]<=p)
        {
            s+=T[i];
            i++;
            if(i==n) return n;
        }
    }
    return i;
}

int solve()
{
   long long left=0;
   long long right=100000*10000;
   long long mid;
   while(right-left>1)
   {
       mid=(left+right)/2;
       int x=check(mid);
       if(x >=n) right=mid;
       else left=mid;
   }
   return right;
}



int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>T[i];
    }
    int tmp=solve();
    cout<<tmp<<endl;
    return 0;



}