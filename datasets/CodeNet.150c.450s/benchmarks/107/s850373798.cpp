#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int memo[1010][1010];

/*
 * i : s1の添字
 * j : s2の添字
 */
int calc(int i, int j) {

    //文字数が足りなくなったら残りは全て削除または全て挿入
    if (i == s1.length()) {
        return memo[i][j] = (int)s2.length() - j;
    }
    if (j == s2.length()) {
        return memo[i][j] = (int)s1.length() - i;
    }

    //計算済み
    if (memo[i][j] != -1) return memo[i][j];

    int res = 1e9;

    //操作なし
    if (s1[i] == s2[j]) res = min(res, calc(i+1, j+1));

    //削除
    res = min(res, calc(i, j+1) + 1);

    //挿入
    res = min(res, calc(i+1, j) + 1);

    //置換
    res = min(res, calc(i+1, j+1) + 1);

    return memo[i][j] = res;

}

int main()
{
    cin >> s1 >> s2;

    for (int i=0; i<1010; i++) {
        for (int j=0; j<1010; j++) {
            memo[i][j] = -1;
        }
    }

    cout << calc(0, 0) << endl;

    return 0;
}
