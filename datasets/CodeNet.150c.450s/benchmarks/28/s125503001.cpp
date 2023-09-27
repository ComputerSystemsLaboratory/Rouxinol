// ALDS1_4_D.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#define MAX_ITEM 1000000
#define MAX_WEIGHT 10000
using namespace std;
typedef long long llong;
int num_item, num_truck;
llong ITEM[MAX_ITEM];

//許容量Pのトラックnum_truck台にITEMがいくつまで載せられるかチェックする
//"連続する"0個以上の荷物しか載せられないので単純に許容以下なら受け入れ許容より大きいなら次のトラックに投げるだけでいい
int check(llong P) {
    int cur_item = 0;
    for (int cur_truck = 0; cur_truck < num_truck; cur_truck++) {
        llong sum_weight = 0;
        while (sum_weight + ITEM[cur_item] <= P) {
            sum_weight += ITEM[cur_item];
            cur_item++;
            //全て載せきれた=アイテム量を返す
            if (cur_item == num_item)return num_item;
        }
    }
    //載せきれなかった = いくつ乗せられたか返す
    return cur_item;
}

//二分探索で最適解に近づけていく
int solve() {
    llong left = 0;
    llong right = num_item * MAX_WEIGHT;
    llong mid;
    //rightもleftも整数型なのでright - left > 1で判定できる
    while (right - left > 1) {
        mid = (right + left) / 2;
        int v = check(mid);
        //載せきれていたらvは最適値かそれより大きい
        if (v >= num_item) right = mid;
        //載せきれていないならvは最適値未満
        else left = mid;
    }
    //leftは最適値より小さくなりrightが最適値になる
    return right;
}
int main()
{
    cin >> num_item >> num_truck;
    for (int i = 0; i < num_item; i++) std::cin >> ITEM[i];
    llong ans = solve();
    cout << ans << endl;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します

