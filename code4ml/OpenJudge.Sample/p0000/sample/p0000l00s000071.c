#include <stdio.h>

int main(int argc, const char * argv[])
{
    int mnt[10], i, j, tmp;
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &mnt[i]);
        if (mnt[i] < 0 || mnt[i] > 10000)
            i -= 1;
    }
    
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (mnt[j] < mnt[j+1]) {
                tmp = mnt [j];
                mnt[j] = mnt[j+1];
                mnt[j+1] = tmp;
            }
        }
    }
    
    for (i = 0; i < 3; i++) {
        printf("%d\n", mnt[i]);
    }
    
    
    return 0;
}