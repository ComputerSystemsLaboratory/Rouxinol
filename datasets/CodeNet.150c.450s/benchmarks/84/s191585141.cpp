#include <cstdio>
#include <climits>

int a[200000];
int L[100001];
int R[100001];

long long merge(int left, int mid, int right){
    long long c = 0;
    int i;
    for(i=0;i<mid-left;i++)L[i]=a[i+left];
    for(i=0;i<right-mid;i++)R[i]=a[i+mid];
    L[mid-left] = INT_MAX;
    R[right-mid] = INT_MAX;
    int j = 0;
    int k = 0;
    for(i=left;i<right;i++){
        if(R[k]<L[j]){
            c += mid+k-i;
            a[i] = R[k];
            k++;
        }else{
            a[i] = L[j];
            j++;
        }
    }
    return c;
}

long long mergeSort(int left, int right){
    if(right-left<=1)return 0;
    int mid = (left + right)/2;
    long long c1 = mergeSort(left,mid);
    long long c2 = mergeSort(mid,right);
    long long c3 = merge(left,mid,right);
    return c1 + c2 + c3;
}

int main(){
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",a+i);
    printf("%lld\n", mergeSort(0,n));
    return 0;
}

