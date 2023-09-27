/**/
#include <iostream>
#include <vector>
using namespace std;

int CalcTheDaySatisfaction(int d, const int N, vector<int>& c, vector<int>& s, int t, vector<int>& last)
{
    int ret = 0;

    // d日目にA[t]Cを開催すると上がる満足度を足す
    ret += s[t];

    // 低下する満足度を計算する
    for( int i = 0; i < N; ++i )
        ret -= c[i] * (d - last[i]);

    return ret;
}


int main()
{
    const int N = 26;

    // 入力
    int D;
    cin >> D;

    vector<int> c(N);
    for( int i = 0; i < N; ++i )
        cin >> c[i];

    vector<vector<int>> s(D);
    for( int i = 0; i < D; ++i ){
        vector<int> tmp(N);
        for( int j = 0; j < N; ++j )
            cin >> tmp[j];
        s[i] = tmp;
    }


    // B問題
    //// 入力
    vector<int> t(D);
    for( int i = 0; i < D; ++i )
        cin >> t[i];
    for( int i = 0; i < D; ++i )
        --t[i];

    //// 満足度計算
    int satisfication = 0;
    vector<int> last(N, 0);
    for( int i = 0; i < D; ++i ){
        // last(d, i)を更新する
        last[t[i]] = i + 1;

        // 満足度を更新する
        satisfication += CalcTheDaySatisfaction(i + 1, N, c, s[i], t[i], last);

        // 出力
        cout << satisfication << endl;
    }

    return 0;
}
/**/