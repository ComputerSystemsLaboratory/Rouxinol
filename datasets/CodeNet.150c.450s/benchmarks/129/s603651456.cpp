#include <iostream>
int main() {
    int r,c;
    scanf("%d%d", &r, &c);
    int a[r+1][c+1];
    for (int i=0; i<c+1; i++) a[r][i]=0;
    for (int i=0; i<r; i++) {
        int s=0;
        for (int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
            s+=a[i][j];
            a[r][j]+=a[i][j];
        }
        a[i][c]=s;
        a[r][c]+=s;
    }
    for (int i=0; i<r+1; i++) {
        printf("%d", a[i][0]);
        for (int j=1; j<c+1; j++) printf(" %d", a[i][j]);
        printf("\n");
    }
    return 0;
}