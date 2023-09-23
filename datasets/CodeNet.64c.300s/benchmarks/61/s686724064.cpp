#include<iostream>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;

    int table[r+1][c+1];

    for (int i = 0; i < r+1; i++){
        for (int j = 0; j < c+1; j++) table[i][j] = 0;
    }

    for (int k = 0; k < r; k++){
        for (int l = 0; l < c; l++){
            cin >> table[k][l];
        }
    }

    for (int m = 0; m < r; m++){
        int total = 0;
        for (int n = 0; n < c; n++){
            total += table[m][n];
        } 
        table[m][c] = total;
    }

    for (int o = 0; o < c + 1; o++){
        int total2 = 0;
        for (int p = 0; p < r; p++){
            total2 += table[p][o];
        } 
        table[r][o] = total2;
    }

    for (int x = 0; x < r + 1; x++){
        for (int y = 0; y < c + 1; y++){
            if (y == 0) cout << table[x][y];
            else cout << " " << table[x][y];
        }
        cout << endl;
    }

    return 0;
}
