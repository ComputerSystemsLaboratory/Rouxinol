#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<iterator>
#include<set>
#define rep(i,n) for(i=0;i<n;i++);
#define endl "\n"
#define ll long long
#define N 200050
using namespace std;
 int a[N];
int main()
{
    long long int d,i,n,m,p=0,q=0,r=0,s=0,l;

    int j,k;

    cin>>n;

    for(i=1; i<=100; i++)
    {

        for(j=1; j<=100; j++)
        {
            for(k=1; k<=100; k++)
            {int c=(i*i)+(j*j)+(k*k)+(i*j)+(j*k)+(k*i);

                if(c<=n)
                    a[c]++;


            }
        }

    }

    for(i=1; i<=n; i++)
        cout<<a[i]<<'\n';
}















