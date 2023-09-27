#include<stdio.h>
#include<string.h>
#include<string>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
    int n,a[100],i;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    sort(a,a+5);
    int f=0;
    for(i=4;i>=0;i--)
    {
        if(f==0)
        {cout<<a[i]; f=1;}
        else
            cout<<" "<<a[i];

    }
    cout<<endl;
    return 0;
}