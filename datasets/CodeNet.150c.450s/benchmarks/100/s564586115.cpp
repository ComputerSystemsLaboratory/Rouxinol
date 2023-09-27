#include <iostream>

/**
* @brief ある整数の階乗を求める
*/
class Factorial
{
public:
    /**
    * @fn int getFactorial(int target)
    * @brief パラメータの階乗を取得する
    * @param[in] target ターゲット
    * @return int 階乗
    */
    long long getFactorial(int target) const;

private:
    /**
    * @fn int calc(int target)
    * @brief 階乗を計算する
    * @param[in] target ターゲット
    * @return int 階乗
    */
    long long calc(int target) const;
};

/**
* @brief コントロール
*/
class Control
{
public:
    /**
    * @fn  bool executeEx() const
    * @brief １つの整数を読み込み、その整数の階乗を出力する
    * @return bool 入力範囲内ならtrueを、そうでなければfalseを返す
    */
    bool executeEx() const;

private:
    /**
    * @fn bool check(int target) const
    * @brief 入力範囲をチェックする
    * @param[in] target チェック対象
    * @return bool 入力範囲内ならtrueを、そうでなければfalseを返す
    */
    bool check(int target) const;

    /**
    * @fn void read(int& data)
    * @brief 標準入力から読み込む
    * @param[out] data 入力整数
    */
    void read(int& data) const;

    /**
    * @fn void write(int target) const
    * @brief 標準出力に書き込む
    * @param[in] target 出力対象
    */
    void write(long long target) const;
};

long long Factorial::getFactorial(int target) const
{
    return calc(target);
}

long long Factorial::calc(int target) const
{
    if (1 >= target)
        return 1;

    return target * calc(target - 1);
}

bool Control::executeEx() const
{
    int input = 0;
    long long output = 0;

    read(input);

    if (!check(input))
        return false;

    output = Factorial().getFactorial(input);

    write(output);

    return true;;
}

bool Control::check(int target) const
{
    static const int Min = 1;
    static const int Max = 20;

    if (Min > target || Max < target)
        return false;

    return true;
}

void Control::read(int& data) const
{
    std::cin >> data;
}

void Control::write(long long target) const
{
    std::cout << target << std::endl;
}

/**
* @fn int main()
* @brief エントリポイント
*/
int main()
{
    if (!Control().executeEx())
        return 1;
}

