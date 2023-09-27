#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define N 200010
typedef long long LL;
using namespace std;
int n;
int a[N];
LL cnt = 0;
void merge(int a[], int left, int mid, int right){
    int i = left;
    int j = mid+1;
    int k = 0;
    int t[n];
    while(i <= mid && j <= right){
        if(a[i] <= a[j]) t[k++] = a[i++];
        else{
            cnt += mid - i + 1;
            t[k++] = a[j++];
        }
    }
    while(i <= mid) t[k++] = a[i++];
    while(j <= right) t[k++] = a[j++];

    for(int p = 0; p < k; p++){
        a[left + p] = t[p];
    }
}
void mergeSort(int a[], int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid+1, right);
        merge(a, left, mid, right);
    }
}
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    mergeSort(a, 0, n-1);
    printf("%lld\n", cnt);
    return 0;
}
