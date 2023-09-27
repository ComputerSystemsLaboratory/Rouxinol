#include <iostream>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int coin[21];
    coin[0] = 0; 
    for (int i = 1; i < M+1; ++i){
        int c;
        cin >> c;
        coin[i] = c;
    }
    int c[21][50001];
    for(int i = 0; i < N+1; i++){
        c[0][i] = 500000;
    }
    for(int j = 0; j < M+1; j++){
        c[j][0] = 0;
    }
    for(int i = 1; i < M+1; ++i){
        for(int j = 1; j < N+1; ++j){
            if(j < coin[i]){
                c[i][j] = c[i-1][j];
            }else{
                c[i][j] = min(c[i-1][j], c[i][j-coin[i]] + 1);
            }
        }
    }
    cout << c[M][N] << endl; 
}