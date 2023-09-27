#include<bits/stdc++.h>
using namespace std;

int Search(int A[],int n,int key)
{
    int i=0;
    A[n]=key;
    while(A[i]!=key)
    {
        i++;
    }
    return i!=n;
}

int main()
{
    int A[10005],n,key,i,q;
    int cnt=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>A[i];
    }

    cin>>q;

    for(i=0;i<q;++i)
    {
        cin>>key;
        cnt+=Search(A,n,key);
    }
    cout<<cnt<<endl;

    return 0;
}
