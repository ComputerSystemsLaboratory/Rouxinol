#include <cstdio>

void countingSort(int *a, int *b, int k, int n){
    int i, c[k+1];
    for(i=0;i<k+1;i++)c[i]=0;
    for(i=0;i<n;i++)c[a[i]]++;
    for(i=1;i<k+1;i++)c[i]+=c[i-1];
    for(i=n-1;i>=0;i--){
        c[a[i]]--;
        b[c[a[i]]]=a[i];
    }
    return;
}

int main(){
    int i, n;
    scanf("%d",&n);
    int a[n];
    int k = 0;
    for(i=0;i<n;i++){
        scanf("%d",a+i);
        if(a[i]>k)k=a[i];
    }
    int b[n];
    countingSort(a,b,k,n);
    for(i=0;i<n;i++){
        printf("%d",b[i]);
        if(i<n-1)printf(" ");
        else printf("\n");
    }
    return 0;
}

