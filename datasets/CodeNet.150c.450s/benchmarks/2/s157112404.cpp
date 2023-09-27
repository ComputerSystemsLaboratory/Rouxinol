#include<bits/stdc++.h>
using namespace std;

int cnt;

int Partition(int A[],int p,int r)
{
    int x=A[r];
    int i=p-1;
    int j,t;
    for(j=p;j<r;++j)
    {
        if(A[j]<=x)
        {
            i=i+1;
            t=A[i];A[i]=A[j];A[j]=t;
        }
    }
    t=A[i+1];A[i+1]=A[r];A[r]=t;
    return i+1;
}

int main(){
    int A[100001],n,i,p;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>A[i];
    }

    p=Partition(A,0,n-1);
    for(i=0;i<n;++i)
    {
        if(i)cout<<" ";
        if(i==p)
        {
            cout<<"[";
        }
        cout<<A[i];
        if(i==p)
        {
            cout<<"]";
        }
    }
    cout<<endl;

    return 0;
}

