#include<iostream>
using namespace std;

int main(void){
    int n,m,l;
    cin >> n >> m >> l;
    int gyoretsu1[100][100] = {{}};
    int gyoretsu2[100][100] = {{}};
    long long int C[100][100] = {};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> gyoretsu1[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < l; j++){
            cin >> gyoretsu2[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            for (int k = 0; k < l; k++){
                 C[i][k] += gyoretsu1[i][j] * gyoretsu2[j][k];
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < l; j++){
            if (j == 0){
               cout << C[i][j];
            }
            else {
               cout << " " << C[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}

