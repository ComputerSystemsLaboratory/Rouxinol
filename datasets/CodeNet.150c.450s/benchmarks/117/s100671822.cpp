#include <iostream>

using namespace std;

int a[500000],num=0;
int l[250005],r[250005];

void merg(int s,int e){
    int mid=(s+e)/2;
    int n1=mid-s+1,n2=e-mid;
    int i;
    for(i=0;i<n1;i++){
        l[i]=a[s+i];
    }
    for(i=0;i<n2;i++){
        r[i]=a[mid+i+1];
    }
    int m1=0,m2=0;
    for(i=0;i<e-s+1;i++){
        l[n1]=r[n2]=1000000005;
        if(l[m1]<=r[m2])a[s+i]=l[m1++];
        else a[s+i]=r[m2++];
    }
    num+=(e-s+1);
}

void mergesort(int s,int e){
    if(s==e)return;
    int mid=(s+e)/2;
    mergesort(s,mid);
    mergesort(mid+1,e);
    merg(s,e);
}

int main()
{
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(0,n-1);
    for(i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1)cout<<" ";
    }
    cout<<endl;
    cout<<num<<endl;
    return 0;
}