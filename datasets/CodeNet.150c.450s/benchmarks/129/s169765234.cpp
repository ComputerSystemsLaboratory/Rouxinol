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
    int r,c,tmp;
    scanf("%d %d",&r,&c);
    int sheet[r+1][c+1];
    for(int i=0;i<r;i++){
        tmp=0;
        for(int j=0;j<c;j++){
            scanf("%d",&sheet[i][j]);
            tmp+=sheet[i][j];
        }
        sheet[i][c]=tmp;
    }
    /**
    for(int i=0;i<r;i++){
        sheet[i][c]=0;
        for(int j=0;j<c;j++){
            sheet[i][c]+=sheet[i][j];
        }
    }**/
    for(int i=0;i<c+1;i++){
        sheet[r][i]=0;
        for(int j=0;j<r;j++){
            sheet[r][i]+=sheet[j][i];
        }
    }
    for(int i=0;i<r+1;i++){
        for(int j=0;j<c+1;j++){
            if(j<c){
                printf("%d ",sheet[i][j]);
            }else{
                printf("%d\n",sheet[i][j]);
            }
        }
    }
    return 0;
}