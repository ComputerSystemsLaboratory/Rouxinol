/**
 * @brief  Miller-Rabinの乱択素数判定法
 *
 * @note   Zn+をZnの0以外の要素の集合、すなわち、
 *           Zn+ = { 1, 2, ..., n - 1 }
 *         とする. nが素数ならばZn+ = Zn*である
 *
 *         nが合成数であり、しかも
 *           a^(n-1) ≡ 1 (mod n)  ...(*1)
 *         を満たすとき、nをaを底とする疑似素数(base-a pseudprime)と言う. フェルマの定理から、nが素数ならばnは任意のa ∈ Zn+に対して式(*1)を満たす
 *         したがって、式(*1)を満たさないa ∈ Zn+を発見できれば、nは確かに合成数である. 驚くべきことに、「ほとんど」の場合、この逆も成り立つ
 *         そこで、この基準はほぼ完全な素数判定基準である. nが式(*1)をa = 2のときに満たすかどうかテストする. 成り立たなければ、COMPOSITEを返して
 *         nは合成数であると断言する. 成り立てば、(実は、nは素数か、2を底とする疑似素数のどちらかだが)nを素数であると考えることにしてPRIMを返す
 *         次の手続きはこの方法でnの素数を疑似的に行う. 入力を2より大きい奇数であると仮定する
 *
 *         PSEUDPRIME(n)
 *         1  if MODULAR_EXPONENTIATION(2, n - 1, n) !≡ 1 (mod n)
 *         2    return COMPOSITE  // 間違いない
 *         3  else return PRIM    // あわよくば
 *
 *         この手続きは間違うことがあるが、間違いは1つの場合にしか起こらない. nを合成数と答えた場合は常に正しい
 *         nが2を底とする疑似素数のときに間違いを犯す
 *
 *         Carmichael(カーマイケル)数(Carmichael number)、すなわち、すべてのa ∈ Zn*に対して式(*1)を満たす合成数nが存在するので、残念ながら、
 *         別の底の候補、たとえば、a = 3を選んで式(*1)をテストするだけではすべての間違いを除去できない. (gcd(a, n) > 1のとき、すなわち、
 *         a !∈ Zn*のとき、式(*1)は確かに成立しない. しかし、大きい素因数だけからnが構成されているときにはgcd(a, n) > 1を満たすaを発見することは
 *         非常に困難であり、このようなaを発見し、nが合成数であることを示そうとする試みに期待することはできない)
 *         最初の3個のCarmichael数は561, 1105, 1729である. Carmichael数は非常に少なく、たとえば、100,000,000までにたったの255個しか存在しない
 *         Carmichael数に騙されないように上記の素数判定法を改良する方法を以下に示す
 *
 *         単純な判定法であるPSEUDPRIMEに2つの修正を施すことによって、Miller-Rabinの素数判定法(Miller-Rabin randomized prime test)はその問題点を解決する
 *
 *         * 底aとして、1つの値だけではなく、ランダムに選択した複数の値を示す
 *         * 各べき乗剰余を計算しているとき、最終のべき乗剰余を得るまでの間、法nの下で非自明な1の平方根をずっと探し続ける
 *           発見すれば、終了してCOMPOSITEを返す
 *
 * @date   2016/04/29 ~ 04/30
 * @note   関連URL: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C
 */



//****************************************
// 必要なヘッダファイルのインクルード
//****************************************

#include <iostream>
#include <cstdint> 
#include <set>



//****************************************
// オブジェクト形式マクロの定義
//****************************************

//#define NUMBER_THEORY_BEGIN namespace nt {
//#define NUMBER_THEORY_END }



//****************************************
// 型シノニム
//****************************************

using int_t    = std::int64_t;
using uint_t   = std::uint64_t;
using bit_t    = uint_t;
using intset_t = std::set<int_t>;



//****************************************
// 関数の宣言
//****************************************

static bool   witness(int_t a, int_t n, int_t t, int_t u);
static uint_t modular_exponentiation(uint_t a, uint_t b, uint_t n);



//****************************************
// 関数の定義
//****************************************

/**
 * @brief  Miller-Rabinの素数判定法を用いて入力nが素数か否か判定する
 *
 * @note   今回取り扱うのはint32_tに収まる程度までの値であり、確率的素数判定ではなく、
 *         適切な証拠aを用いて入力した整数nに対して厳密に素数判定を行います
 *
 * @param  int_t n 素数性を判定したい整数n
 * @return nが素数か否か
 */
bool miller_rabin(int_t n)
{
    if (((!(n & 0x01)) && n != 2) || (n < 2) || ((n % 3 == 0) && (n != 3))) { return false; }
    if (n <= 3) { return true; }
    
    int_t t = 1, u = n / 2;  // tとuをn - 1 = 2^t * uを満たす整数でt>=1かつuは奇数であるとする
    while (!(u & 0x01)) { t = t + 1;  u /= 2;  }
    
    const int_t a[] = { 2, 7, 61, -1 };
    for (int i = 0; a[i] < n && a[i] != -1; i++) {
        if (witness(a[i], n, t, u)) { return false; }
    }
    return true;
}


/**
 * @brief  ある整数aを用いてnが合成数か否かを判定する
 *
 * @param  int_t a ある整数a
 * @param  int_t n 素数性を判定したい奇数n
 * @param  int_t t n-1 = 2^(t)*uかつt>=1を満たすようなt
 * @param  int_t u n-1 = 2^(t)*uかつu%2==1を満たすようなu
 * @return nが合成数か否か
 */
bool witness(int_t a, int_t n, int_t t, int_t u)
{
    int_t x = modular_exponentiation(a, u, n);  // x0 = a^u mod nを計算
    int_t y = x;

    for (int i = 0; i < t; i++) {
        y = (x * x) % n;

        // 法nの下で1の非自明な平方根が存在するのはnが合成数であるときに限る
        if (y == 1 && x != 1 && x != (n - 1)) { return true; }
  
        x = y;
    }
    
    return y != 1;  // xt ≡ a^(n-1) (mod n)が1でなければtrueそうでなければfalseを返す
}


/**
 * @brief 反復2乗法(repeated squaring)はbの2進表現を用いてベキ乗剰余(modular exponentiation)を解く
 *
 * @note  aとbを非負整数, nを正整数とするとき、a^b mod nを効率良く計算する
 *
 * @note  次の手続きでは、2倍にする操作と1を加える操作を繰り返してcを0からbまで増加させるのにしたがって、
 *        対応するa^c mod nを計算する
 *
 * @note  入力a, b, nがβビットの数ならば、必要な算術演算の総数はΟ(β)であり、したがって、必要なビット演算の総数はΟ(β^3)である
 */
uint_t modular_exponentiation(uint_t a, uint_t b, uint_t n)
{
    uint_t d = 1;
    while (b > 0) {
        if (b & 0x01) {
            d = (d * a) % n;
        }
        a = (a * a) % n; 
        b >>= 1;
    }
    return d;
}



//****************************************
// エントリポイント
//****************************************

int main()
{
    using namespace std;

    int n, m, p = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (miller_rabin(m)) { p = p + 1; }
    }
    cout << p << endl;

    return 0;
}


