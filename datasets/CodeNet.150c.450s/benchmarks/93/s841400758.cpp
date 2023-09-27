#include<iostream>
using namespace std;
struct Card
{
    char name;
    int number;
};
Card a[100005],b[100005],tmp[100005];
int n;
void merge(Card a[],int l,int m,int r,Card tmp[])
{
    int p1=l,p2=m+1,p3=0;
    while(p1<=m&&p2<=r)
    {
        if(a[p1].number<=a[p2].number) tmp[p3++]=a[p1++];
        else tmp[p3++]=a[p2++];
    }
    while(p1<=m) tmp[p3++]=a[p1++];
    while(p2<=r) tmp[p3++]=a[p2++];
    for(int i=0;i<=r-l;i++) a[i+l]=tmp[i];
}
void mergesort(Card a[],int l,int r,Card tmp[])
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(a,l,m,tmp);
        mergesort(a,m+1,r,tmp);
        merge(a,l,m,r,tmp);
    }
}
int partition(Card a[],int p,int r)
{
    Card x=a[r],t;
    int i=p-1;
    for(int j=p;j<r;j++)
    {
        if(a[j].number<=x.number)
        {
            i++;
            t=a[j];a[j]=a[i];a[i]=t;
        }
    }
    t=a[i+1];a[i+1]=a[r];a[r]=t;
    return i+1;
}
void quicksort(Card a[],int p,int r)
{
    if(p<r)
    {
        int q=partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}
int main()
{
    int i,stable=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].number;
        b[i].name=a[i].name;
        b[i].number=a[i].number;
    }
    mergesort(b,0,n-1,tmp);
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        if(a[i].name!=b[i].name)
        {
            stable=0;
            break;
        }
    }
    if(stable==1) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].number<<endl;
    }
    return 0;
}
