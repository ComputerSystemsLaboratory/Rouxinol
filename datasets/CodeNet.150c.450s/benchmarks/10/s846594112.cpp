#include <iostream>
using namespace std;
int main() {
    int A[5][4][11];
    int n, b, f, r, v;
    cin >> n;
    
    for (int i = 1; i < 5; i++){
        for (int j = 1; j < 4; j++){
            for (int k = 1; k < 11; k++){
                A[i][j][k] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++){
        cin >> b >> f >> r >> v;
        A[b][f][r] += v;
    }
    for (int i = 1; i < 5; i++){
        for (int j = 1; j < 4; j++){
            for (int k = 1; k < 11; k++){
                cout << ' ' << A[i][j][k];
            }
            cout << endl;
        }
        if(i == 4)continue;
        else{
            cout << string(20, '#') << endl;
        }
    }
    return 0;
}

