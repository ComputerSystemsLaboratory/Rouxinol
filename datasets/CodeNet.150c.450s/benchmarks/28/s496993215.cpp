#include <bits/stdc++.h>
using namespace std;

int sss(int A[],int n,int p){
    int ans=0,ww,i=0;
    while(true){
    ans++;
    ww=0;
    while(ww+A[i]<=p&&i<n){
        ww+=A[i];
        i++;
    }
    if(i==n)return ans++;
    }
}

int minP(int A[],int n,int k){
    int sum=0,left,right,mid,m=A[0],ki;
    for(int i=0;i<n;i++){
        sum+=A[i];
        m=max(m,A[i]);
    }
    left=max(sum/k,m);
    right=((n+k-1)/k)*m;
    while(left<right){
        mid=(left+right)/2;
        ki=sss(A,n,mid);
        if(ki<k)right=mid-1;
        else if(ki>k)left=mid+1;
        else right=mid;
    }
    return left;
}

int main(){
    int n,k;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    cout<<minP(A,n,k)<<endl;
}
