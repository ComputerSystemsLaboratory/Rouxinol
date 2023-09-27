#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
ll factorial(int i) {       //階乗
    if (i == 0) return 1;
    return (factorial(i - 1)) * i;
}

int main() {
    int d;
    cin >> d;
    vector<int> c(26); //満足度の下がりやすさ
    rep(i, 26) cin >> c[i];
    vector<vector<int>> s(d, vector<int> (26)); //満足度の増減(たてが日時、よこがコンテストの種類)
    rep(i, d) {
        rep(j, 26) cin >> s[i][j];
    }
    vector<int> t(d); //コンテスト開催種類
    rep(i, d) cin >> t[i];
    int satis = 0; //満足度
    vector<int> date(26); //コンテストの開催日時の記憶(last用)
    set<int> be; //コンテストが開催されたかどうかの判断
    rep(i, d) {  //日時 0-indexed
        date[t[i] - 1] = i; //コンテストの日時 0-indexed
        be.insert(t[i]); //コンテストが開催されたことを記憶。1-indexed
        satis += s[i][t[i] - 1];
        rep(j, 26) {  //1日の終わりの満足度の減少 0-indexed
            int last;
            if(be.count(j + 1)) last = date[j] + 1; //1-indexed
            else last = 0; 
            satis -= c[j] * (i + 1 - last);
        }
        cout << satis << endl;
    }
}