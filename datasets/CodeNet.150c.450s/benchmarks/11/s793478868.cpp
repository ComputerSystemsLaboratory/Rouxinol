#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int n;
        int card[4][13];
        for(int i=0;i<4;i++){
                for(int j=0;j<13;j++){
                        card[i][j]=0;
                }
        }
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            char c;
                int m;
                scanf("%s %d",&c,&m);
                if(c=='S'){
                        card[0][m-1]=1;
                }else if(c=='H'){
                        card[1][m-1]=1;
                }else if(c=='C'){
                        card[2][m-1]=1;
                }else{
                        card[3][m-1]=1;
                }
        }
        for(int i=0;i<4;i++){
                for(int j=0;j<13;j++){
                        if(card[i][j]==0){
                                if(i==0){
                                        printf("S %d\n",j+1);
                                }else if(i==1){
                                        printf("H %d\n",j+1);
                                }else if(i==2){
                                        printf("C %d\n",j+1);
                                }else{
                                        printf("D %d\n",j+1);
                                }
                        }
                }
        }
        return 0;
}