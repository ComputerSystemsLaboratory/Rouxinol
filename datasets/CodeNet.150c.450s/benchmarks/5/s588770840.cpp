#include <stdio.h>

int main(void)
{
    int data[100], n;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) { 
        static int j = 0;
        scanf("%d", &data[j]);
        j++;
    }
    for (int k = n - 1; k >= 0; k--) {
        printf("%d", data[k]);
        if (k != 0) printf(" ");
    }
    printf("\n");
    
    return 0;
}