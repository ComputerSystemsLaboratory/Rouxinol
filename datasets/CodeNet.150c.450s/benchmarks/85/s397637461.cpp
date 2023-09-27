#include <cstdio>
int N, MEMO[100][100], V[100][100];
struct info {
    int r;
    int c;
};
struct info MAT[100];
int DP(int i, int j);
void input(void);
int main(void){
    //freopen("in.txt", "r", stdin);
    input();
    printf("%d\n", DP(0, N - 1));
    return 0;
}
int DP(int i, int j){
    if (V[i][j] == 1) return MEMO[i][j];
    V[i][j] = 1;
    if (i >= j) return 0;
    int min = 987654321;
    for(int k = i; k < j; k++){
        int cnd = DP(i, k) + DP(k + 1, j) + MAT[i].r * MAT[k].c * MAT[j].c;
        if (cnd < min) min = cnd;
    }
    MEMO[i][j] = min;
    return min;
}
void input(void){
    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf("%d%d", &MAT[i].r, &MAT[i].c);
}