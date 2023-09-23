#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int part(int a[],int p,int r){
    int x=a[r];
    int i=p-1;
    for (int j = p; j < r; ++j) {
        if (a[j]<=x){
            i+=1;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

int main() {
    int n,a[100000];
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }

    int pos=part(a,0,n-1);

    for (int j = 0; j <n ; ++j) {
        if (j>0)
            printf(" ");
        if (j==pos)
            printf("[");
        printf("%d",a[j]);
        if (j==pos)
            printf("]");
    }
    printf("\n");
    
    return 0;
}