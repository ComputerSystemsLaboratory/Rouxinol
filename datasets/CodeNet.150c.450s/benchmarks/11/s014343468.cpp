#include <stdio.h>

int main(void)
{
    int s[13]={0}, h[13]={0}, c[13]={0}, d[13]={0}, n, i, temp;
    char ch;

    scanf("%d", &n);

    for(i=0;i<n;i++) {
        scanf(" %c %d", &ch, &temp);
        switch(ch) {
            case 'S':
                s[temp -1]=1;
                break;
            case 'H':
                h[temp-1]=1;
                break;
            case 'C':
                c[temp-1]=1;
                break;
            case 'D':
                d[temp-1]=1;
                break;
        }
    }
    for(i=0;i<13;i++) {
        if(s[i]==0)
            printf("S %d\n", i+1);
    }
    for(i=0;i<13;i++) {
        if(h[i]==0)
            printf("H %d\n", i+1);
    }
    for(i=0;i<13;i++) {
        if(c[i]==0)
            printf("C %d\n", i+1);
    }
    for(i=0;i<13;i++) {
        if(d[i]==0)
            printf("D %d\n", i+1);
    }
    return 0;
}