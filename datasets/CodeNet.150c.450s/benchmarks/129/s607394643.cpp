#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int r,c;
        scanf("%d %d",&r,&c);
        int sheet[r+1][c+1];
        for(int i=0;i<r+1;i++){
            for(int j=0;j<c+1;j++){
                    sheet[i][j]=0;
                }
        }
        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                        scanf("%d",&sheet[i][j]);
                        sheet[i][c]+=sheet[i][j];
                        sheet[r][j]+=sheet[i][j];
                        sheet[r][c]+=sheet[i][j];
                }
        }
        for(int i=0;i<r+1;i++){
                for(int j=0;j<c+1;j++){
                        if(j<c)printf("%d ",sheet[i][j]);
                        if(j==c)printf("%d\n",sheet[i][j]);
                }
        }
        return 0;
}