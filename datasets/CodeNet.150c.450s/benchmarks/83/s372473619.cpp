#include <bits/stdc++.h>
using namespace std;
int zero() { return 0; }
int sets(int A, int B, int C, int G) {
    if(B == 0 || C == 0) {
        return 0;

    } else if(A <= B) {
        return G;

    } else {
        return 0;
    }
}

int dia(int D, int E, int F, int H) {
    if(E - F < 0) {
        return 0;
    } else {
        return H;
    }
}

int main() {
    int N;                     //ナップザックの容量
    int M;                     //個数
    vector<vector<int>> Array; //容量と価値まとめ

    cin >> M >> N;

    int Array1[M + 1][N + 1]; //価値の状況

    for(int i = 0; i < M + 1; i++) {
        if(i == 0) {
            vector<int> Temp;
            Temp.push_back(0);
            Temp.push_back(0);
            Array.push_back(Temp);

        } else {
            int temp1, temp2; // temp1  容量     //temp2価値
            vector<int> Temp;
            cin >> temp2 >> temp1;
            Temp.push_back(temp1);
            Temp.push_back(temp2);
            Array.push_back(Temp);
        }
    }

    for(int i = 0; i < M + 1; i++) //縦
    {
        for(int n = 0; n < N + 1; n++) {
            if(i == 0 || i == 1) {
                if(i == 0) {
                    Array1[i][n] = zero();
                } else {

                    Array1[i][n] = sets(Array[i][0], n, i, Array[i][1]);
                }
            }

            else {
                int DOWN, DIA;
                DOWN = Array1[i - 1][n];
                DIA = dia(i, n, Array[i][0],
                          Array1[i - 1][n - Array[i][0]] + Array[i][1]);

                if(DOWN >= DIA) {
                    Array1[i][n] = DOWN;
                } else if(DIA > DOWN) {
                    Array1[i][n] = DIA;
                }
            }
        }
    }

    cout << Array1[M][N] << endl;
}
