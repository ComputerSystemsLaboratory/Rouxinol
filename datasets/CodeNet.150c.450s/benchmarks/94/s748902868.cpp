#include<iostream>
using  namespace std;
int bubble(int A[],int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
     for(j=n-1;j>=i+1;j--)
     {
        if(A[j-1]>A[j])
           {swap(A[j-1],A[j]);
           c++;}
     }}
     return c;
}
int main()
{
    int n,c;
    int A[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    c=bubble(A,n);
    for(int i=0;i<n;i++)
    {if(i>0)
        cout<<" ";
        cout<<A[i];
    }
    cout<<endl<<c<<endl;
    return 0;
}
