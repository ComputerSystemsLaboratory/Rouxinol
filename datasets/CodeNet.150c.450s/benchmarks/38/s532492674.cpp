#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a[3];
        for(int i=0;i<3;i++)
            cin>>a[i];
        sort(a,a+3);
        if(a[2]*a[2]==a[0]*a[0]+a[1]*a[1])
            printf("YES\n");
        else
            printf("NO\n");
    }
}