#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mini;
    cin>>n;
    int a[n+1],cnt=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        mini=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[mini])
                mini=j;

        }
        swap(a[i],a[mini]);
        if(i!=mini)
            cnt++;

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        if(i!=n-1)
            cout<<" ";

    }
    cout<<endl<<cnt<<endl;
}

