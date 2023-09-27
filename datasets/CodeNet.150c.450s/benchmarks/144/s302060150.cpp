#include<iostream>
using namespace std;

int main() 
{
    int n, m, l;

    cin >> n >> m >> l;

    long long a[n][m];
    long long b[m][l];
    long long c[n][l];

    for( int i = 0; i < n; i++ )                        //配列a初期化
        for( int j = 0; j < m; j++ )
            cin >> a[i][j];

    for( int i = 0; i < m; i++ )                        //配列b初期化
        for( int j = 0; j < l; j++ )
            cin >> b[i][j];

    for( int i = 0; i < n; i++ )                        //配列c初期化
        for( int j = 0; j < l; j++ )
            c[i][j] = 0;

    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < l; j++ )
        {
            for( int k = 0; k < m; k++ )
            {
                c[i][j] += a[i][k] * b[k][j];            //計算式
            }

            if( j != l - 1 )                             //l列の後に空白を出力しないための処理
                cout << c[i][j] << " ";                  //出力はkが周り終わり、配列cに値が入った直後
            else
                cout << c[i][j];        
        }
        cout << endl;                                    //出力はjが周り終わり、末列が出力された直後
    }
    return 0;
}
