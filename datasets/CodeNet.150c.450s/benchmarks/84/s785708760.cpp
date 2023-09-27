#include <bits/stdc++.h>
using namespace std;
#define MAX 200001
#define BMAX 100002
#define INFI 2100000000
int S[MAX];
int n;
int L[BMAX], R[BMAX];

long Merge(int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right-mid;
    long cnt = 0;
    for(int i=0;i<n1;i++){
        L[i] = S[left+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = S[mid+i];
    }
    L[n1] = INFI;
    R[n2] = INFI;
    int i=0,j=0;
    for(int k=0;k<n1+n2;++k){
        if(L[i]<=R[j]){
            S[left+k] = L[i];
            i++;
        }
        else{
            S[left+k] = R[j];
            cnt += (n1-i);
            j++;
        }
    }
    return cnt;
}


long countInversion(int left, int right){
    if(left+1<right){
        long v1,v2,v3;
        int mid = (left+right)/2;
        v1 = countInversion(left,mid);
        v2 = countInversion(mid,right);
        v3 = Merge(left,mid,right);
        return v1+v2+v3;
    }
    return 0;
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&S[i]);
    }
    long cnt = countInversion(0,n);
    printf("%ld\n",cnt);
    return 0;
}

