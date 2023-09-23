#include <bits/stdc++.h>
using namespace std;

// i --> 0 - 9までの数字
// sum --> 合計値
// cnt --> 和がSとなる組み合わせの数
// total --> 足す数(N個まで足す)
int N, S, cnt;
void dfs( int i, int sum, int total )
{
    //N回を満たしている 且つ 合計がSに達したものをcountする
    if( total == N && sum == S )
    {
        cnt++;
        return;
    }
    //0-9まで探索したら or 足す回数がN回に達したら 終わり
    if( i == 10 || total == N ) return;
    
    //合計に i を足す場合 -> 足す回数を +1 する
    dfs( i + 1, sum + i, total + 1 );
    //合計に i を足さない場合
    dfs( i + 1, sum, total );
}
int main()
{
    while( cin >> N >> S )
    {
        if( N == 0 && S == 0 ) break;
        //合計値の初期化
        cnt = 0;
        //dfs( 数字の0から, 合計値0から, 足す数字0から)
        dfs( 0, 0, 0 );
        cout << cnt << endl;
    }
    return 0;
}
