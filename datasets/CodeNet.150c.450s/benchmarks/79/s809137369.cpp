#include<stdio.h>

int main(){
    while(1){
        int n,r;
        int table[50];
        scanf("%d%d", &n, &r);
        if(n == 0 && r==0){
            return 0;
        }
        for (int i=0; i<n ; i++) {
            table[i]=n-i;
        }
        for(int i=0; i<r; i++){
            int p,c;
            int work[50];
            scanf("%d%d", &p,&c );
            for(int j=0; j<c; j++){
                work[j]=table[p-1+j];
            }
            for(int j=0; j<p-1; j++){
                work[c+j]=table[j];
            }
            for(int j=p-1+c; j<n; j++){
                work[j]=table[j];
            }
            for(int j=0; j<n; j++){
                table[j]=work[j];
            }
        }
        printf("%d\n", table[0] );
    }
}

