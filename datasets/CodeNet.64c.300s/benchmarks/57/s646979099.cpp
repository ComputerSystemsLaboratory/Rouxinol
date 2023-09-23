#include<bits/stdc++.h>
using namespace std;

void solve(int R, int C, int *a){
    int ans = 0;
    for(int bit = 0; bit < (1<<R); bit++){
        int temp = 0;
        int b[R][C];
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++)
                b[i][j] = ((bit & (1<<i)) ? (1 - *(a + i * C + j)) : *(a + i * C + j));
        }
        for(int j = 0; j < C; j++){
            int A = 0;
            for(int i = 0; i < R; i++) A += b[i][j];
            temp += max(A, R - A);
        }
        ans = max(ans, temp);
    }
    cout << ans << endl;
    return;
}

int main(){
    int R, C;
    while(cin >> R){
        if(R == 0) return 0;
        cin >> C;
        int a[R][C];
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++) cin >> a[i][j];
        }
        solve(R, C, &a[0][0]);
    }
}
