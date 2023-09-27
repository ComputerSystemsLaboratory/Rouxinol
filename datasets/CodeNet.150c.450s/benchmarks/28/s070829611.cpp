#include<iostream>//入出力用
using namespace std;
typedef long long llong;//4バイトの符号整数型、64bitの情報格納可
int n, k;//n個数、k台数
llong T[100000];//制約よる荷物の最大個数配列

/*最大積載量の設定*/
int check(llong P) {
    int i = 0;
    for(int j = 0; j < k; j++){
        llong s = 0;//無積載トラック
        while( s + T[i] <= P ){//最大積載量になるまで乗せる
            s += T[i];
            i++;
            if (i == n) return n;//最大個数を乗せたとき
        }
    }
    return i;
}

/*2文探索を使用*/
int solve(){
    llong l = 0;
    llong r = 100000 * 100000;//荷物の個数*1個当たりの最大積載量
    llong mid;
    while (r > l + 1){
        mid = (l + r) / 2;
        int v = check(mid);//mid==Pを決め何個乗せれるか
        if (v >= n) r = mid;
        else l = mid;
    }
    return r;
}

int main(){
    cin >> n >> k;//入力：nの個数取得した後kの台数取得
    for (int i = 0; i < n; i++) cin >> T[i];//n個分荷物追加
    llong ans = solve();
    cout << ans << endl;//結果出力
    return 0;
}

