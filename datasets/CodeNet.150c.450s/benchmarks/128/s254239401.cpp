#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{   
    char a[20];
    char b[20];
    scanf("%s", a);
    int i = 0;
    int j = 0;
    while (strcmp(&a[i], "\0") != 0) {
        i += 1;
    }
    i -= 1;
    strcpy(&b[i], &a[i]);
    for (; i >=  0; i--) {
        b[j] = a[i];
        j += 1;
    } 
    printf("%s\n", b);
    return 0;
}