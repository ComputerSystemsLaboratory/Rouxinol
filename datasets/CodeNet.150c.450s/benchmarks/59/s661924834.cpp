#include<iostream>
using namespace std;

void InsertionSort( int *x, int n )             //main関数で配列のアドレスを受け取る
{
    int v, j;                                   //vを抜き出し、適切な位置へとソート

    for( int i = 1; i <= n - 1; i++ )           //1からn-1まで順にvとして抜き出しソート
    {
        v = x[i];                               //最初のvはx[1],...,最後のvはx[n-1]. 
        j = i - 1;                              //x[i]を対象とするなら、x[i-1]と比べる。

        while( j >= 0 && x[j] > v )             //前の要素の方が大きい場合、入れ替え続ける
        {
            x[j+1] = x[j];
            j--;
            x[j+1] = v;
        }

        for( int t = 0; t < n - 1; t++ )            //途中結果の出力
            cout << x[t] << " ";
        cout << x[n-1] << endl;

    }

}

int main()
{
    int num;                            //num個の要素
    
    cin >> num;

    int x[num];                         //num個の配列を確保
    
    for( int i = 0; i < num; i++ )      //入力
        cin >> x[i];

    for( int i = 0; i < num - 1; i++ )  //入力直後の並びを出力
        cout << x[i] << " ";
    cout << x[num-1] << endl;    

    InsertionSort( x , num );
    
    return 0;
}
