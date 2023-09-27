#include <stdio.h>
#include <math.h>

//#define ELEMENTC 2000001
//#define ELEMENT 10000 

int n,k = 10000;
int a[2000001], b[2000001], c[10000];

int main(void)
{
    int i, j;
    
    scanf("%d", &n);
    for(i = 0 ; i < n ; i++) {
        scanf("%d", &a[i + 1]);
    }
    
    for(i = 0 ; i <= k ; i++) {
        c[i] = 0;
    }
    for(i = 0 ; i < n ; i++) {
        c[a[i + 1]]++;
    }
    for(i = 1 ; i <= k ; i++) {
        c[i] =  c[i] + c[i-1];
    }
    for( j = 1 ; j <= n ; j++) {
        b[c[a[j]]] = a[j];
        c[a[j]]--;
    }
    
    for(i = 1 ; i <= n ; i++) {
        printf("%d",b[i]);
        if(i == n) {
            printf("\n");
        }
        else {
            printf(" ");
        }
    }
    return 0;
}
