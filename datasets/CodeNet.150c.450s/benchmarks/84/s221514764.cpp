#include<stdio.h>
using namespace std;

int a[200005],l[100005],r[100005];

long long m(int left,int mid,int right){
    int n1=mid-left;
    int n2=right-mid;
    long long cnt=0;
    for(int i=0;i<n1;i++) l[i]=a[i+left];
    for(int i=0;i<n2;i++) r[i]=a[i+mid];
    l[n1]=r[n2]=2000000000;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(l[i]<=r[j])
            a[k]=l[i++];
        else{
            a[k]=r[j++];
            cnt+=n1-i;
        }
    }
    return cnt;
}

long long ms(int left,int right){
    int mid;
    long long v1,v2,v3;
    if(left+1<right){
        mid=(left+right)/2;
        v1=ms(left,mid);
        v2=ms(mid,right);
        v3=m(left,mid,right);
        return v1+v2+v3;
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%lld\n",ms(0,n));
    return 0;
}