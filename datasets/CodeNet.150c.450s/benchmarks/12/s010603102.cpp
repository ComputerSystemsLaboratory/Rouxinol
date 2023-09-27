#include <stdio.h>

int main(){

    int h, A[251];

    scanf("%d",&h);

    int i;
    for(i=1; i<=h;i++){
        scanf("%d", &A[i]);
    }

    for(i=1;i<=h;i++){
        printf("node %d: key = %d, ", i, A[i]);
        if(i != 1) printf("parent key = %d, ", A[(int)i/2]);
        if((i*2) <= h) printf("left key = %d, ", A[(i*2)]);
        if((i*2)+1 <= h) printf("right key = %d, ", A[(i*2)+1]);
        printf("\n");
    }

    return 0;

}