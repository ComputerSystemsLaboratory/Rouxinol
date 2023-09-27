#include <bits/stdc++.h>
using namespace std;

const int MAX_H = 15;
const int W = 5;
int H;
int Pazzle[MAX_H][W];

// row行目について、ランレングス圧縮？みたいなことをして、resに格納
// (first , second) := (石の数字, 並んでいる数)
void Parse(int row, vector<pair<int, int>> &res)
{
    auto &p = Pazzle[row];
    res.push_back({p[0], 1});
    for (int i = 1; i < W; ++i)
    {
        if (res.back().first != p[i])
        {
            res.push_back({p[i], 1});
        }
        else
        {
            ++res.back().second;
        }
    }
}

// 落とせる石を一マスだけ落とす
// 落とす石がなかったらfalseを返す
bool fall()
{
    bool flg = false;
    for (int i = 0; i < H - 1; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            // インデックスが増える方向に石が落ちていく
            if (Pazzle[i + 1][j] == -1 && Pazzle[i][j] != -1)
            {
                swap(Pazzle[i][j], Pazzle[i + 1][j]);
                flg = true;
            }
        }
    }
    return flg;
}

// 消せるぷよぷよを全て消す(-1にする)
// 戻り値: 消した数
int check()
{
    int res = 0;
    for (int row = 0; row < H; ++row)
    {
        vector<pair<int, int>> L;
        Parse(row, L);
        int cur = 0;
        for (auto &p : L)
        {
            if (p.first == -1 || p.second < 3)
            {
                cur += p.second;
                continue;
            }
            // -1に塗りつぶし
            for (int i = cur; i < cur + p.second; ++i)
            {
                res += Pazzle[row][i]; // スコア
                Pazzle[row][i] = -1;
            }
            cur += p.second;
        }
    }

    // デバッグ
    /*
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            printf("%d%c", Pazzle[i][j], j == W - 1 ? '\n' : '\t');
        }
    }
    printf("\n");
    */
    // 石を落とす
    while (fall())
    {
    }
    /*
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            printf("%d%c", Pazzle[i][j], j == W - 1 ? '\n' : '\t');
        }
    }
    printf("\n");
    */
    return res;
}

bool solve()
{
    cin >> H;
    if (H == 0)
        return false;

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            cin >> Pazzle[i][j];
        }
    }

    int res = 0;
    int add = 0;
    while ((add = check()) > 0)
        res += add;
    cout << res << endl;

    return true;
}

int main()
{
    while (solve())
        ;
    return 0;
}
