#include <iostream>
#include <algorithm>
#include <numeric>
#include <cstdint>

using std::int64_t;  // （非本質） std::int64_t はちょっと長いのでこれだけ std:: を省略できるようにする。

// なんとなく， w はちょっぴり大きめに取っておく （競プロ勢の慣習）
int64_t n, k, w[100010];
// 説明の順番のためにプロトタイプ宣言しているけど，普通はここに実装も書いちゃって大丈夫。
int64_t solve(int64_t inf, int64_t sup);

int main(){
    // 入力
    std::cin >> n >> k;
    for(int64_t i=0; i < n; ++i)
        std::cin >> w[i];

    // 【考え方】
    // 　・Pがある値以上の時は「条件」が成立，ある値未満の時は条件が不成立になる。その境界を探す
    // 　・「条件」の計算が簡単 （今回は貪欲法で順番にトラックに詰めてみれば判定できる）
    // 　　　　　-> Pの値で二分探索しよう！

    // ！ 注意： 二分探索は半開区間で行うとバグりにくい ！
    // 半開区間をどちらに開かせるかは重要 (後半で解説している)
    // 上限：「荷物の総和」より積載量を大きくしてもしょうがないのでこれが上限
    // ！ 注意 ！ int (32bit整数) だとオーバーフローする。 0 も int64_t 型にキャストすること！
    // 　競プロでは，不幸な事故を避けるため，脳死で int64_t を使った方が無難。
    int64_t sup =
        std::accumulate(std::begin(w), std::end(w), static_cast<int64_t>(0)) + 1;
    // 下限 ：「荷物一つの重さの最大値」が本来の下限だが，1より小さくならない。
    // 　　　　半開区間の下界なので -1 して 0 にしている。
    int64_t inf = 0;

    // 二分探索して出力
    std::cout << solve(inf, sup) << std::endl;
}

// 二分探索の実装
int64_t solve(int64_t inf, int64_t sup){
    // 区間の大きさが既に1なら探索が終わっているので，そのまま返す。
    if(inf + 1 >= sup)
        return sup;

    // まず P_m を区間の中点に設定 (m は medium の頭文字)
    // ここから先は，(inf, sup] を (inf, P_m] と (P_m, sup] に分けて，
    // どちらに境界があるかを見ていく。

    const int64_t P_m = (inf + sup) / 2;

    // 注意点として， 仮に [inf, sup)を [inf, P_m) と [P_m, sup) に分ける実装だとして，
    // P_m で上手くいくことが判明した場合，欲しい値が上の区間にあるか下の区間にあるか分からない。
    // (P_mが真の答えの場合とそうじゃない場合を考えてみよう)

    // 逆に， (inf, sup] を (inf, P_m] と (P_m, sup] に分ける場合，
    // P_m の時にダメだったら答えは (P_m, sup] の中にあるし，大丈夫だったら答えは (inf, P_m] の中にある。
    // なのでこちら向きの半開区間にするのが正解。

    // ここまで考えればあとは貪欲法をやるだけ！
    // P = P_m としてトラックに積んでみる

    bool is_ok = true;  // 積めそうかどうか
    int64_t current_truck_weight = 0;  // 今のトラックに積んでいる量
    int64_t truck_needed = 0;  // 必要になるトラック数が入る

    // 荷物を順に for ループで積んでいく
    for(int64_t package_idx = 0; package_idx < n; ++package_idx){
        int64_t package_weight = w[package_idx];  // 今積んでいる荷物の重量

        // 荷物単体でトラックの積載量を超えたらアウト
        if(package_weight > P_m)
            is_ok = false;

        // 今のトラックに積みきれるか判定
        if(current_truck_weight + package_weight > P_m){
            ++truck_needed;  // 次のトラックを用意する
            current_truck_weight = package_weight;  // 新しいトラックに載せる
        } else {
            current_truck_weight += package_weight;
        }
    }

    // 積み終わった時点で最後のトラックに荷物が残っていたら出発させる
    if(current_truck_weight > 0){
        ++truck_needed;
        current_truck_weight = 0;
    }

    // 載せ終わった時点でトラックが足りていなかったことが分かったらアウト
    if(truck_needed > k)
        is_ok = false;

    if(is_ok)
        return solve(inf, P_m);  // 積み込めた場合は (inf, P_m] に答えがある
    else
        return solve(P_m, sup);  // 無理だった場合は (P_m, sup] に答えがある
}

