#include <cstdio>

int partition(int *a, int p, int r){
    int x = a[r];
    int i = p - 1;
    int tmp;
    for(int j=p;j<r;j++){
        if(a[j]<=x){
            i++;
            tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
        }
    }
    a[r] = a[i+1];
    a[i+1] = x;
    return i + 1;
}

int main(){
    int i, n, p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)scanf("%d",a+i);
    p = partition(a, 0, n-1);
    for(i=0;i<n;i++){
        if(i!=p)printf("%d",a[i]);
        else printf("[%d]",a[i]);
        if(i<n-1)printf(" ");
        else printf("\n");
    }
    return 0;
}

