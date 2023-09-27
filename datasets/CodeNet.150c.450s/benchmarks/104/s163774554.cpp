#include <cstdio>
#include <cmath>

#define MAX_N 30
#define MAX_W 30

void swap(int* a, int* b){
    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int w,n,ans[MAX_W];
    int a[MAX_N], b[MAX_N];

    scanf("%d",&w);
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf( "%d, %d", &a[i], &b[i]);
    }

    // Initialize
    for(int i = 0; i < w; i++){
        ans[i] = i + 1;
    }

    // Solve
    for(int i = 0; i < n; i++){
        swap(&ans[ a[i] - 1 ], &ans[ b[i] - 1 ]);
    }

    for(int i = 0; i < w; i++){
        printf("%d\n",ans[i]);
    }



    return 0;
}