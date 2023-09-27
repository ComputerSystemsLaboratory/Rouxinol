#include<iostream>
using namespace std;

int main() 
{
    int r, c;                                       //r * c行列

    cin >> r >> c;

    long long Sheet[r+1][c+1];                      //初めから合計値を格納する場所を設ける

    for( int i = 0; i <= r; i++ )                   //全て0で初期化
        for( int j = 0; j <= c; j++ )
            Sheet[i][j] = 0;

    for( int i = 0; i < r; i++ )                    //合計値を  格納する場所を除いて、入力値を保存
        for( int j = 0; j < c; j++ )                //入力ついでに合計も計算
        {
            cin >> Sheet[i][j];
            Sheet[i][c] += Sheet[i][j];             //行の合計値を格納(cは列の最後)
            Sheet[r][j] += Sheet[i][j];             //列の合計値を格納(rは行の最後)

            if( j + 1 == c )                        //jはcまで回らない(j<r)のでj+1
                Sheet[r][c] += Sheet[i][c];         //合計の合計値を格納
        }
    
    for( int i = 0; i <= r; i++ )                   //出力
    {
        for( int j = 0; j <= c; j++ )
        {
            if( j == c )                            //最後の空白を省く
                cout << Sheet[i][j];
            else
                cout << Sheet[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
