#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

int LCS(int len[],char S[][1001]){//???????????????2?????§?????????
    int DP[1001][1001] = {};
    for (int i = 1; i <= len[0]; i++) {
        for (int j = 1; j <= len[1]; j++) {
            if(S[0][i-1] == S[1][j-1]){
                DP[i][j] = DP[i-1][j-1]+1;
            }else{
                DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
            }
        }
    }
    
    return DP[len[0]][len[1]];
}

void solve(){
    char S[2][1001];
    int len[2];
    scanf("%s %s",S[0],S[1]);
    len[0] = strlen(S[0]);
    len[1] = strlen(S[1]);
    int ll;
    ll = LCS(len,S);
    printf("%d\n",ll);
}

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        solve();
    }
    
    return 0;
}