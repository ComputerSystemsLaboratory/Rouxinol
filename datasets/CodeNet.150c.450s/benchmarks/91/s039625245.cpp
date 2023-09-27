#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i, j, k, n, count;
    int a[999999];
    
    count = 0;
    
    while(scanf("%d",&n) != EOF){
        if (count == 0) {
            if (n > 1) {
                a[count++] = 2;
                if (n > 2) {
                    a[count++] = 3;
                    for(i=5; i<=n; i+=2){
                        k=0;
                        for(j=0; a[j]*a[j] <= i; j++){
                            if(i%a[j] == 0) {
                                k = 1;
                                break;
                            }
                        }
                        if (k == 0) {
                            a[count++] = i;
                        }
                    }
                }
            }
            printf("%d\n",count);
        } else {
            if (n <= a[count - 1]) {
                for (i=count - 1; n < a[i]; i--);
                printf("%d\n", i+1);
            } else {
                if (a[count-1] == 2) {
                    a[count++] = 3;
                    printf("%d\n",count);
                } else {
                    for(i=a[count - 1]+2; i<=n; i+=2){
                        k=0;
                        for(j=0; a[j]*a[j] <= i; j++){
                            if(i%a[j] == 0) {
                                k = 1;
                                break;
                            }
                        }
                        if (k == 0) {
                            a[count++] = i;
                        }
                    }
                    printf("%d\n", count);
                }
            }
        }
    }
    return 0;
}