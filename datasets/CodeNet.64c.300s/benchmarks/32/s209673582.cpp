#include<iostream>
using namespace std;

int main() 
{
    long long min, max;
    long long sum = 0;
    int n;

    cin >> n;

    int num[n];

    for( int i = 0; i < n; i++ )            //n個の整数を配列に格納
    {
        cin >> num[i];
        sum += num[i];                      //合計を蓄積
    }

    min = num[0];                           //最初の整数で初期化
    max = num[0];                           //

    for( int i = 1; i < n; i++ )
    {
        if( min > num[i] )                  //minより小さいものがあればminの値を更新
            min = num[i];
        if( max < num[i] )                  //maxより大きいものがあればmaxの値を更新
            max = num[i];
    }

    cout << min << " " << max << " " << sum << endl;

    return 0;
}
