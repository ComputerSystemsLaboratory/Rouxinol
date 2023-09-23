#include <stdio.h>

int main(void){
    int rooms[4][3][10];
    int n, b, f, r, v;

    for (int i=0; i<4; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<10; k++){
                rooms[i][j][k]=0;
            }
        }
    }

    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d %d %d %d", &b, &f, &r, &v);
        rooms[b-1][f-1][r-1] += v;
    }

    for (int i=0; i<4; i++){
        if (i) printf("####################\n");
        for (int j=0; j<3; j++){
            for (int k=0; k<10; k++){
                printf(" %d", rooms[i][j][k]);
            }
            printf("\n");
        }
    }
   return 0;
}