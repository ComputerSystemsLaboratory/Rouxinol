#include <stdio.h>

int main(int argc, const char * argv[]) {
    int count[4][3][10]={0};
    int n,b,f,r,v,i,j,k,o;
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        
        scanf("%d %d %d %d",&b,&f,&r,&v);
        count[b-1][f-1][r-1]+=v;
    }
    
    for (o=0; o<4;o++ ) {
        for (j=0; j<3; j++) {
            for (k=0; k<10; k++) {
                printf(" %d",count[o][j][k]);
            }printf("\n");
        }if (o<3) {
            printf("####################\n");
            
        }
    }
    
   
    return 0;
}