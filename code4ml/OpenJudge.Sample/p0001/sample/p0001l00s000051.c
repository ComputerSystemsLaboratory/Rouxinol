#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX 256
int main(){
    int left[200];
    int right[200];
    int i,j;
    int digits;
    double log;
    char str[MAX], *tp;

    /* input */
    while (fgets(str,MAX,stdin) != NULL)
    {
        tp = strtok(str, " ");
        left[i] = atoi(tp);
        tp = strtok(NULL, "\n");
        right[i] = atoi(tp);
        i++;
    }

    for(j = 0; j < i; j ++)
    {
        log = log10(left[j] + right[j]);
        digits = log + 1;
        printf("%d\n",digits);
    }

    return 0;
}