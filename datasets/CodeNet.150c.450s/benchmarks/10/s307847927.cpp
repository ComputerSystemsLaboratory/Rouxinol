#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    int n,b,f,r,v;
    int room[4][3][10];
    scanf("%d",&n);
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<10;k++){
                room[i][j][k]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&b,&f,&r,&v);
        room[b-1][f-1][r-1]+=v;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<10;k++){
                printf(" %d",room[i][j][k]);
            }
            if(j!=2 || (j==2 && i==3)){
                printf("\n");
            }else if(i!=3){
                printf("\n####################\n");
            }
        }
    }
    return 0;
}