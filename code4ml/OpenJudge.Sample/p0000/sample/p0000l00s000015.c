#include <stdio.h>

void BubSort(int x[ ], int n) {
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (x[j - 1] > x[j]) {
                temp = x[j];
                x[j] = x[j - 1];
                x[j - 1]= temp;
            }
        }
    }
}


int main(int argc, const char * argv[])
{
    int i, tmp;
    int height[10];
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &tmp);
        height[i] = tmp;
    }
    BubSort(height, 10);

    for (i = 9; i >= 7; i--) {
        printf("%d\n", height[i]);
    }
    return 0;
}