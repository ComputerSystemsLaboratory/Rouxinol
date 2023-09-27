#include <bits/stdc++.h>
using namespace std;
bool func(int a,int b)
{
    return (a>b);
}
int main()
{
    int ara[100000],i;
    for (i=0;i<5;i++)
    {
        scanf ("%d",&ara[i]);
    }
    sort(ara,ara+5,func);
    for (i=0;i<5;i++)
    {
        printf ("%d",ara[i]);
        if (i<4)
            cout<<" ";
    }
    cout<<endl;
}
