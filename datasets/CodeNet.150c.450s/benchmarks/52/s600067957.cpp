#include <stdio.h>
 
int main(void) {
    int A[10];
    int m=0, n;
    while(!feof(stdin)) {
        scanf("%d",&n);
        if(feof(stdin))break;
        if(n==0) {
            m--;
            printf("%d\n",A[m]);
        } else {
            A[m]=n;
            m++;
        }
    }
    return 0;
}