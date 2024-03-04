#include <stdio.h>

void swap(int *x, int *y)
{
        *x = *x ^ *y;
        *y = *x ^ *y;
        *x = *x ^ *y;
}

void bsort(int list[10])
{
        int needAgain = 0;
        int i;
        do {
                needAgain = 0;
                for(i = 0; i < 8; i++) {
                        if(list[i]<list[i+1]) {
                                swap(&list[i],&list[i+1]);
                                needAgain = 1;
                        }
                }
        }while(needAgain);
}

int main()
{
        int heights[10];
        int i;
        for(i = 0; i < 10; i++) {
                scanf("%d",&heights[i]);
        }
        bsort(heights);
        for(i = 0; i < 3; i++) {
                printf("%d\n",heights[i]);
        }
        return 0;
}