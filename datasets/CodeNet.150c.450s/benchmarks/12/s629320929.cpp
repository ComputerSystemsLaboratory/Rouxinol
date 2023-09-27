#include <stdio.h>

#define NMAX 300

int main() {
    int A[NMAX],n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++) {
        scanf("%d",&A[i]);
    }
    int parent,left,right;
    for (int i=1;i<=n;i++) {
        parent=i/2;
        left=i*2;
        right=left+1;
        printf("node %d: ", i);
        printf("key = %d, ", A[i]);
        if(parent>=1){
            printf("parent key = %d, ", A[parent]);
        }
        if(left<=n) {
            printf("left key = %d, ", A[left]);
        }
        if(right<=n) {
            printf("right key = %d, ", A[right]);
        }
        printf("\n");
    }
        
    return 0;
}

