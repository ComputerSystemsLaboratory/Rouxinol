#include<stdio.h>

int main()
{
    int h1, h2, h3;
    h1 = 0; h2 = 0; h3 = 0;
    int height;
    while (scanf("%d", &height) != EOF) {
        if (height > h1) {
            h3 = h2;
            h2 = h1;
            h1 = height;
        } else if (h1 >= height && height > h2) {
            h3 = h2;
            h2 = height;
        } else if (h2 >= height && height > h3) {
            h3 = height;
        }
    }
    printf("%d\n%d\n%d\n", h1, h2, h3);
    return 0;
}