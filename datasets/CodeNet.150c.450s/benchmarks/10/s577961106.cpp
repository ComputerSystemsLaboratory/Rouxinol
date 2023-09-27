#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int room[4][3][10];
        for(int i=0;i<4;i++){
                for(int j=0;j<3;j++){
                        for(int k=0;k<10;k++){
                                room[i][j][k]=0;
                        }
                }
        }
        int n;
        scanf("%d",&n);
        for(int i;i<n;i++){
                int b,f,r,v;
                scanf("%d %d %d %d",&b,&f,&r,&v);
                room[b-1][f-1][r-1]+=v;
        }
        for(int i=0;i<4;i++){
                for(int j=0;j<3;j++){
                        for(int k=0;k<10;k++){
                                if(k<9){
                                        printf(" %d",room[i][j][k]);
                                }else{
                                        printf(" %d\n",room[i][j][k]);
                                }
                        }
                        if(j==2 && i!=3){
                                printf("####################\n");
                        }
                }
        }
        return 0;
}