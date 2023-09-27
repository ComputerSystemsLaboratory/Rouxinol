#include <iostream>
#define MAX 1000000005
using namespace std;

int n;
int a[200005];
long long cnt=0;
int l[100005];
int r[100005];

void merg(int s,int e){
    int i,mid=(s+e)/2;
    int n1=mid-s+1;
    int n2=e-mid;
    for(i=0;i<n1;i++)l[i]=a[s+i];
    for(i=0;i<n2;i++)r[i]=a[mid+1+i];
    l[n1]=r[n2]=MAX;
    int l_i=0,r_i=0;
    for(i=0;i<=e-s;i++){
        if(l[l_i]<r[r_i])a[s+i]=l[l_i++];
        else {
            cnt+=r_i-i+n1;
            a[s+i]=r[r_i++];
        }
    }
}

void mergesort(int s,int e){
    if(s<e){
        int mid=(e+s)/2;
        mergesort(s,mid);
        mergesort(mid+1,e);
        merg(s,e);
    }
}

int main()
{
    cin>>n;
    int i;
    for(i=0;i<n;i++){cin>>a[i];}
    mergesort(0,n-1);
    cout<<cnt<<endl;
    return 0;
}