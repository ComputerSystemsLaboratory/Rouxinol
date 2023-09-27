#include<iostream>
using namespace std;

int main(){
    int r, c, sum, t_sum = 0;
    cin >> r >> c;
    int table[101][101] = {{}};
    
    for(int i = 0; i < r; i++){
        sum = 0;
        for(int j = 0; j < c; j++){
            cin >> table[i][j];
            sum += table[i][j];
            table[r][j] += table[i][j];
        }
        table[i][c] = sum;
        t_sum += sum;
    }
    table[r][c] = t_sum;
    
    for(int i = 0; i < r+1; i++){
        for(int j = 0; j < c; j++){
            cout << table[i][j] << " ";
        }
        cout << table[i][c] << endl;
    }
    return 0;
}
