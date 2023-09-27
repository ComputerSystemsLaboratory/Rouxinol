
#include<iostream>
#include<cstdio>

using namespace std;

typedef long long LL;

const int maxn=2e5+5;
const int sentinel=0x3f3f3f3f;

int l[maxn/2+2],r[maxn/2+2],a[maxn],n;

LL merge(int left,int mid,int right)
{
    int i,j,k;
    LL cnt=0;
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++){
        l[i]=a[left+i];
    }
    for(int i=0;i<n2;i++){
        r[i]=a[mid+i];
    }
    l[n1]=r[n2]=sentinel;
    i=j=0;
    for(int k=left;k<right;k++){
        if(l[i]<=r[j]){
            a[k]=l[i++];
        }else{
            a[k]=r[j++];
            cnt+=n1-i;
        }
    }
    return cnt;
}

LL mergesort(int left,int right)
{
    int mid;
    LL v1,v2,v3;
    if(left+1<right){
        mid=(left+right)>>1;
        v1=mergesort(left,mid);
        v2=mergesort(mid,right);
        v3=merge(left,mid,right);
        return v1+v2+v3;
    }else{
        return 0;
    }
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    LL ans=mergesort(0,n);
    cout<<ans<<endl;
    return 0;
}
/*
5
3 5 2 1 4
*/

