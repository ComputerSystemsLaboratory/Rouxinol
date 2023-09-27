#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <memory>
#include <string>
#include <map>
using namespace std;
#define MAX 1003

char A[MAX];
char B[MAX];

void print(){}
int DP[MAX][MAX];
int dp(int i,int j){
    if(i<0||j<0) return 0;
    if(DP[i][j]!=-1) return DP[i][j];
    if(A[i]==B[j]) return DP[i][j]=dp(i-1,j-1)+1;
    return DP[i][j]=max(dp(i,j-1),dp(i-1,j));
}
void solve(){


    int tmp;
        scanf("%d",&tmp);
        int r,c;
        while(tmp--){

                scanf("%s%s",A,B);
                r=strlen(A);
                c=strlen(B);
                memset(DP,-1,sizeof(DP));
            printf("%d\n",dp(r-1,c-1));
        }

}

int main(){

    //freopen("in","r",stdin);
    solve();
    return 0;
}