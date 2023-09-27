// 最長増加部分列
// 問題URL: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_D&lang=jp
// 
// アルゴリズムがシンプルで良いと思いました。
// std:lower_boundという便利な関数を知り驚きました。

#include <iostream>

using namespace std;

int LIS[100000 + 5], a[100000 + 5];
int N, ans;

#define INF 1000000000

int main(){
    cin >> N;
    fill(LIS, LIS + N, INF); //DP表の初期化

    for(int i = 0; i < N; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < N; ++i){
        *lower_bound(LIS, LIS+N, a[i]) = a[i];
    }

    for(int i = 0;i < N; ++i){
        if(LIS[i]==INF){
            break;
        }
        ans++;
    }
    cout << ans << endl;
}


