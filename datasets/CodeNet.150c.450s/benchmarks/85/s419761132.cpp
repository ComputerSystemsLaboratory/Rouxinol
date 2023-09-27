#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define MAX_N 100
#define INF 1000000000


int N;
int r[MAX_N],c[MAX_N];
int memo[MAX_N][MAX_N];
int saiki(int i ,int j){
    if(memo[i][j] > -1)
        return memo[i][j];
    if(i == j)
        return 0;
    int mini = INF;
    FOR(k,i,j){
        mini = min(mini,saiki(i,k) + saiki(k + 1,j) + r[i] * c[k] * c[j]);
    }
    return memo[i][j] = mini;
}

int main(){
    scanf("%d",&N);
    REP(i,N){
        scanf("%d%d",&r[i],&c[i]);
    }
    REP(i,N)REP(j,N)memo[i][j] = -1;
    printf("%d\n",saiki(0,N-1));
    return 0;
}