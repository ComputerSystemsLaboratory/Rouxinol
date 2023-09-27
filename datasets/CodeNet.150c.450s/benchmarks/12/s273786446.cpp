#include <stdio.h>

void check_parent(int i, int a[], int n){
    if(i-1<0) return;
    printf("parent key = %d,",a[(i-1)/2]);
    printf(" ");
}

void left_key(int i, int a[], int n){
    if(i*2+1>=n) return;
    printf("left key = %d,",a[i*2+1]);
    printf(" ");
}

void right_key(int i, int a[], int n){
    if(i*2+2>=n) return;
    printf("right key = %d,",a[i*2+2]);
    printf(" ");
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("node %d: ",i+1);
        printf("key = %d, ",a[i]);
        check_parent(i,a,n);
        
        left_key(i,a,n);
        right_key(i,a,n);
        printf("\n");
    }
    return 0;
}
