#include <cstdio>

int n;
int A[200000];
int L[100001];
int R[100001];

long int merge(int l, int r, int m){
    int i;
    for(i=0;i<m-l;i++)L[i] = A[l+i];
    for(i=0;i<r-m;i++)R[i] = A[m+i];
    L[m-l] = 1000000001;
    R[r-m] = 1000000001;
    int idL = 0, idR = 0;
    long int cnt = 0;
    for(i=l;i<r;i++){
        if(L[idL]<=R[idR]){
            A[i] = L[idL];
            idL++;
        }else{
            A[i] = R[idR];
            idR++;
            cnt+=m-l-idL;
        }
    }
    return cnt;
}

long int mergeSort(int l, int r){
    if(r-l==1)return 0;
    int m = (l+r)/2;
    long int cnt = 0;
    cnt += mergeSort(l,m);
    cnt += mergeSort(m,r);
    cnt += merge(l,r,m);
    return cnt;
}

int main(){
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",A+i);
    }
    printf("%ld\n",mergeSort(0,n));
    return 0;
}

