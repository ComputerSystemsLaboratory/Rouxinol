#include <iostream>
using namespace std;
int main(void){
    int n, W;
    cin >> n >> W;
    int v[n];
    int w[n];
    for(int i = 0; i < n; i++){
        cin >> v[i] >> w[i];
    }
    int table[n + 1][W + 1];
    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < W + 1; j++){
            table[i][j] = 0;
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < W + 1; j++){
            if(j < w[ i - 1]){
                table[i][j] = table[i - 1][j];
            }else{
                if(table[i - 1][j] > table[i - 1][j - w[i - 1]] + v[i - 1]){
                    table[i][j] = table[i - 1][j];
                }else{
                    table[i][j] = table[i - 1][j - w[i - 1]] + v[i - 1];
                }
            }
        }
    }
    cout << table[n][W] << endl;
    return 0;
}