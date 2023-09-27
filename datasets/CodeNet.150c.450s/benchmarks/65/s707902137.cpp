#include<iostream>
using namespace std;
struct card{char suit,value;};
void bubble(struct card A[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i+1;j--)
        {
            if(A[j-1].value>A[j].value)
                swap(A[j],A[j-1]);
        }
    }
}
void selection(struct card A[],int n)
{
    int minx;
    for(int i=0;i<n-1;i++)
    {   minx=i;
        for(int j=i;j<n;j++)
        {if(A[j].value<A[minx].value)
            minx=j;}
        swap(A[i],A[minx]);
    }
}
void print(struct card A[],int n)
{
    for(int i=0;i<n;i++)
        {if(i)cout<<" ";
        cout<<A[i].suit<<A[i].value;}
        cout<<endl;
}
bool itstable(struct card c1[],struct card c2[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(c1[i].suit!=c2[i].suit)
            return false;}
    return true;
}
int main()
{
    card c1[100],c2[100];
    int n;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c1[i].suit>>c1[i].value;
        c2[i]=c1[i];
    }
    bubble(c1,n);
    selection(c2,n);
    print(c1,n);
        cout<<"Stable"<<endl;
    print(c2,n);
    if(itstable(c1,c2,n))
       {cout<<"Stable"<<endl;}
    else {cout<<"Not stable"<<endl;}
    return 0;
}
