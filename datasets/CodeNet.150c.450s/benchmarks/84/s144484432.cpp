#include<stdio.h>

int s[500000],n;
long long count;

void Merge(int left,int mid,int right){
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1 + 1],R[n2 + 1];
    for(int i = 0;i < n1;i++)
        L[i] = s[left + i];
    for(int i = 0;i < n2;i++)
        R[i] = s[mid + i];
    L[n1] = 2000000000;
    R[n2] = 2000000000;
    int i = 0;
    int j = 0;
    for(int k = left;k < right;k++){
        if(L[i] <= R[j])
            s[k] = L[i++];
        else{
            s[k] = R[j++];
            count += n1 - i;
        }
    }
}

void MergeSort(int left,int right){
    if(left + 1< right){
        int mid = (left + right)/2;
        MergeSort(left,mid);
        MergeSort(mid,right);
        Merge(left,mid,right);
    }
}

int main(void){
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&s[i]);
    }

    MergeSort(0,n);
    printf("%lld\n",count);
    return 0;
}