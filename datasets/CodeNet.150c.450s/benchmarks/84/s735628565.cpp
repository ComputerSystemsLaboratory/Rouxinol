#include<iostream>
using namespace std;
#define MAX 200000
#define SENTINEL 2000000000
typedef long long llong;
int L[MAX/2+2],R[MAX/2+2];

llong merge(int A[],int left,int right,int mid){
    int i=0,j=0;
    int n1=mid-left,n2=right-mid;
    llong cnt=0;
    for(int k=0;k<n1;k++)L[k]=A[left+k];
    for(int k=0;k<n2;k++)R[k]=A[mid+k];
    L[n1]=R[n2]=SENTINEL;
    for(int k=left;k<right;k++){
        if(L[i] <= R[j]){
            A[k] = L[i++];
        }else{
            A[k] = R[j++];
            cnt += n1-i;
        }
    }
    return cnt;
}


llong inversion(int A[],int left,int right){
    llong cnt1,cnt2,m;
    int mid;
    if(left+1<right){
        mid=(left+right)/2;
        cnt1 = inversion(A,left,mid);
        cnt2 = inversion(A,mid,right);
        m = merge(A,left,right,mid);
        return cnt1 + cnt2 + m;
    }else{
        return 0;
    }
}

int main(){
    int n,A[MAX];
    //scanf("%d",&n);
    cin >> n;
    for(int i=0;i<n;i++)cin >> A[i];
    llong ans = inversion(A,0,n);
    cout << ans << endl;
    return 0;
}
