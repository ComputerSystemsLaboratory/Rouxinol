#include<iostream>
using namespace std;

static const int N = 100;
int p[N+1];
int m[N+1][N+1];

int main(){
    int h;
    cin >> h;
    for(int i = 0; i < h; i++){
        cin >> p[i] >> p[i+1];
    }

    for(int i = 1; i <= h; i++) m[i][i] = 0;

    // lはこれから計算する行列積を成す行列の数2->h(DP)
    for(int l = 2; l <= h; l++){
        // iはこれから計算する行列積の先頭の行列
        for(int i = 1; i <= h-l+1; i++){
            // jはこれから計算する行列積の末尾の行列(これを含む)
            int j = i + l -1;
            m[i][j] = 1<<30;
            for(int k = i; k < j; k++){
                m[i][j] = min(m[i][j], m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]);
            }
        }        
    }

    cout << m[1][h] << endl;
    return 0;
}
