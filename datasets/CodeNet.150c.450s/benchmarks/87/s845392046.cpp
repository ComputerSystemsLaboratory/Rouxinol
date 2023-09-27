#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define INF 1e9
typedef long long ll;


int main() {
    while(1){
        int H; cin >> H;

        if(H==0){
            return 0;
        }
        vector<vector<int>> board(H+1, vector<int>(5));
        FOR(i,1,H+1){
            REP(j,5){
                cin >> board[i][j];
            }
        }

        int ans = 0;
        int ans_before = 0;
        while(1){
            FOR(i,1,H+1){
                int num = 0;
                int count = 0;
                REP(j,5){
                    if(num == board[i][j]){
                        count++;
                        if(count >= 3 && j==4){
                            ans += count * num;
                            for(int k= j; k>=j-count+1; k--){
                                board[i][k] = 0;
                            }
                        }
                    }else{
                        if(count >= 3){
                            ans += count * num;
                            for(int k= j-1; k>=j-count; k--){
                                board[i][k] = 0;
                            }
                        }
                        num = board[i][j];
                        count = 1;
                    }
                }  
            }
            REP(n,H){
                for(int i=H; i>=1; i--){
                    REP(j,5){
                        if(board[i][j]==0){
                            board[i][j]=board[i-1][j];
                            board[i-1][j]=0;
                        }
                    }
                }
            }

            if(ans == ans_before){
                cout << ans << endl;
                break;
            }
            ans_before = ans;

            // FOR(i,1,H+1){
            //     REP(j,5){
            //         cout << board[i][j] << " ";
            //     }
            //     cout << endl;
            // }

        }

    }
    return 0;
}
