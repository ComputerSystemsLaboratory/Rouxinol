#include <stdio.h>
 
using namespace std;
 
void output(int H[3][10]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            printf(" %d",H[i][j]);
        }
        printf("\n");
    }
}
 
 
int main(){
    int H1[3][10],H2[3][10],H3[3][10],H4[3][10],n,h_num,f_num,r_num,div_num;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            H1[i][j] = H2[i][j] = H3[i][j] = H4[i][j] = 0;
        }
    }
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d %d",&h_num,&f_num,&r_num,&div_num);
        switch(h_num){
        case 1:
            H1[f_num-1][r_num-1] += div_num;
            break;
        case 2:
            H2[f_num-1][r_num-1] += div_num;
            break;
        case 3:
            H3[f_num-1][r_num-1] += div_num;
            break;
        case 4:
            H4[f_num-1][r_num-1] += div_num;
            break;
        }
    }
 
    output(H1);
    printf("####################\n");
    output(H2);
    printf("####################\n");
    output(H3);
    printf("####################\n");
    output(H4);
 
}


