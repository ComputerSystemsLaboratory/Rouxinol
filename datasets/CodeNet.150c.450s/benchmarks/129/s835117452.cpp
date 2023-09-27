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
        int s[r+1][c+1];
        for(int i=0;i<r;i++){
                s[i][c]=0;
                for(int j=0;j<c;j++){
                        scanf("%d",&s[i][j]);
                        s[i][c]+=s[i][j];
                        if(i){
                                s[r][j]+=s[i][j];
                        }else{
                                s[r][j]=s[i][j];
                        }
                }
        }
        s[r][c]=0;
        for(int i=0;i<c;i++){
                s[r][c]+=s[r][i];
        }
        for(int i=0;i<=r;i++){
                for(int j=0;j<=c;j++){
                        if(j!=c){
                                printf("%d ",s[i][j]);
                        }else{
                                printf("%d\n",s[i][j]);
                        }
                }
        }
        return 0;
}