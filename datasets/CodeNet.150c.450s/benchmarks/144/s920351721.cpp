#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,m,l;
    cin >> n >> m >> l;
    //行列A
    int matrixA[100][100]={0,0};
    //行列B
    int matrixB[100][100]={0,0};
    //行列C
    long long matrixC[100][100]={0,0};
    //----------------------------------------------
    //行列A-格納
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> matrixA[i][j];
        }
    }
    //行列B-格納
    for (int i=0; i<m; i++) {
        for (int j=0; j<l; j++) {
            cin >> matrixB[i][j];
        }
    }
    //--------------------------------------------
    //行列計算
    for (int i=0; i<n; i++) {
        for (int k=0; k<l; k++) {
            for (int j=0; j<m; j++) {
                matrixC[i][k] += matrixA[i][j]*matrixB[j][k];
            }
        }
    }
    //出力
    for (int i=0; i<n; i++) {
        for (int j=0; j<l-1; j++) {   //行列Cはn*l
            cout << matrixC[i][j] << " ";  //列
        }
        cout << matrixC[i][l-1] << endl;
    }
    return 0;
}
