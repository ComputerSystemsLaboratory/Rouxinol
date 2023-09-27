#include<iostream>
using namespace std;
int selection(int A[],int n)
{
    int c=0,minx;
    for(int i=0;i<n-1;i++)
    {
        minx=i;
        for(int j=i;j<n;j++)
        {
            if(A[j]<A[minx])
                {minx=j;}}
                swap(A[i],A[minx]);
                if(i!=minx)
                c++;
    }
    return c;
}
int main()
{
    int n,A[100],c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    c=selection(A,n);
    for(int i=0;i<n;i++)
    {
        if(i)cout<<" ";
        cout<<A[i];
    }
    cout<<endl;
    cout<<c<<endl;
}
