#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> board;
int H;


int solve(){
    int res = 0, look = 0, cnt = 0;
    for(int i=0; i<H; i++){
        for(int j=0; j<3; j++){
            look = board[i][j];
            cnt = 1;
            for(int k = j+1; k<5; k++){
                if(board[i][j] == board[i][k]) cnt++;
                else break;
            }
            if(cnt >= 3){
                res += look * cnt;
                for(int k=j, count=0; count < cnt; k++, count++){
                    board[i][k] = 0;
                }
                break;
            }
        }
    }
    return res;
}

void dump(){
    for(int i=H-1; i>-1; i--){
        for(int j=0; j<5; j++) {
            if(board[i][j] == 0) {
                for(int k=i-1; k>-1; k--) {
                    if(board[k][j] != 0){
                        board[i][j] = board[k][j];
                        board[k][j] = 0;
                        break;
                    }
                }
            }
        }
    }
}

int main(){
    int res,tmp;
    while(true){
        cin >> H;
        if(H==0) break;
        res = 0;
        board = vector<vector<int>>(H, vector<int>(5));
        for(int i = 0; i<H; i++){
            cin >> board[i][0] >> board[i][1] >> board[i][2] >> board[i][3] >> board[i][4];
        }

        while(true){
            tmp = solve();
            res += tmp;
            dump();
            if(tmp == 0) break;
        }
        cout << res << endl;
    }
}