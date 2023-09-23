#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,b,i,co=0;
    cin>>a>>b>>c;
    for(i=a;i<=b;i++)
    {
        if(c%i==0)
            co++;
    }
    cout<<co<<endl;
}

