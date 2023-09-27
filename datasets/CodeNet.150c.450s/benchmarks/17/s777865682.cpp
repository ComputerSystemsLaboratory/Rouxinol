#include <iostream>
#include <cstring>

using namespace std;

namespace sorting_five_numbers
{
    class SortingFiveNumbers
    {
    private:
        //! データサイズ
        static const int Size = 5;

        //! 入力値
        int dataList[Size];

    public:
        /**
        * @brief コンストラクタ
        */
        SortingFiveNumbers(int target[]) {
            memset(dataList, 0, Size);

            for (int i = 0; i < Size; i++) {
                dataList[i] = target[i];
            }
        }

        /**
        * @fn int* createDescendingList()
        * @brief 降順にソートしたリストを生成する
        * @return int* ソート済みリスト
        */
        int* createDescendingList();
    };

    class Control
    {
    private:
        //! データサイズ
        static const int Size = 5;

    public:
        /**
        * @fn bool executeEx()
        * @brief 5つの整数を読み込み、降順に整列し出力する
        * @return bool 入力値が範囲内ならtrueを、そうでなければfalseを返す
        */
        bool executeEx();

    private:
        /**
        * @fn void read(int target[])
        * @brief 標準入力から読み込む
        * @param[out] target 入力データ
        */
        void read(int target[]);

        /**
        * @fn void write(int target[])
        * @brief 標準出力に書き込む
        * @param[in] target 出力データ
        */
        void write(int target[]);

        /**
        * @fn bool check(int target[])
        * @brief 入力データが範囲内か調べる
        * @param[in] target 調査対象
        * @return bool 入力データが範囲内ならtrueを、そうでなければfalseを返す
        */
        bool check(int target[]);
    };
}

using namespace sorting_five_numbers;

int* SortingFiveNumbers::createDescendingList()
{
    for (int i = 0; i < Size - 1; i++) {
        int max = i;
        for (int j = i + 1; j < Size; j++) {
            if (dataList[max] < dataList[j]) {
                max = j;
            }
        }
        int t = dataList[i];
        dataList[i] = dataList[max];
        dataList[max] = t;
    }

    return dataList;
}

bool Control::executeEx()
{
    int input[Size] = { 0 };
    int* output = NULL;

    read(input);

    if (!check(input))
        return false;

    SortingFiveNumbers list(input);

    output = list.createDescendingList();

    write(output);

    return true;
}

void Control::read(int target[])
{
    for (int i = 0; i < Size; i++)
        cin >> target[i];
}

void Control::write(int target[])
{
    for (int i = 0; i < Size; i++) {
        (i != Size - 1) ? cout << target[i] << " " : cout << target[i] << endl;
    }
}

bool Control::check(int target[])
{
    static const int Min = -100000;
    static const int Max = 100000;

    for (int i = 0; i < Size; i++) {
        if (Min > target[i] || Max < target[i])
            return false;
    }

    return true;
}

int main()
{
    if (!Control().executeEx())
        return 1;
}

