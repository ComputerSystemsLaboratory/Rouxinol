#include<iostream>

using namespace std;

int search1(int A[],int n,int key)
{
    int i=0;
    A[n]=key;
    while(A[i]!=key)
    {
        i++;
    }
    if(i==n)return 0;
    return 1;
}

int main()
{
    int A[10001],q,n,B[500];
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>B[i];
        if(search1(A,n,B[i])) sum++;

    }
    cout<<sum<<endl;

}