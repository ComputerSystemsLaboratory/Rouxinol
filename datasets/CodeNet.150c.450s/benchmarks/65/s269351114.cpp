#include <iostream>
#include <cstdio>
using namespace std;
const int N=110;
struct card{
    char suit,value;
};
void bubble(struct card a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i+1;j--)
        {
            if(a[j].value<a[j-1].value)
            {
                card t;
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
    }
}

void selection(struct card a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(a[j].value<a[min].value)
                min=j;
        }
        card t=a[i];a[i]=a[min];a[min]=t;
    }
}
void print(struct card a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(i) cout<<" ";
        cout<<a[i].suit<<a[i].value;
    }
    cout<<endl;
}
bool isstable(struct card a[],struct card b[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i].suit!=b[i].suit)
            return false;
    }
    return true;
}
int main()
{
    card a[N],b[N];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].suit>>a[i].value;
        b[i]=a[i];
    }
    bubble(a,n);
    selection(b,n);
    print(a,n);
    cout<<"Stable"<<endl;
    print(b,n);
    if(isstable(a,b, n))
        cout<<"Stable"<<endl;
    else
        cout<<"Not stable"<<endl;
    return 0;
}