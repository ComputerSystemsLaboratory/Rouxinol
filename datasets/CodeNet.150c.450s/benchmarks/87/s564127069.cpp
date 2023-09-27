#include <bits/stdc++.h>
using namespace std;
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return 1;
    }
    return 0;
}
typedef long long int ll;

#define EPS (1e-7)
#define INF (1e9)
#define LLINF (1e18)
#define PI (acos(-1))
#define MOD (1000000007)
#define ALL(v) (v).begin(), (v).end()
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

//-------------------------------------
const int w = 5;

void printBoard(vector<vector<int>> &board, int h)
{
    cout << "---------------------------" << endl;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "----------------------------" << endl;
}

int del(vector<vector<int>> &board, int h)
{
    // 消えたところは一旦-1にする
    int res = 0;
    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w - 2; x++)
        {
            if (board[y][x] == -1)
            {
                continue;
            }

            int right = x;
            while (right + 1 < w && board[y][right + 1] == board[y][right])
            {
                right++;
            }
            if (right - x + 1 >= 3)
            {
                for (int i = x; i <= right; i++)
                {
                    res += board[y][i];
                    board[y][i] = -1;
                }
                x = right;
            }
        }
    }
    // 消したところを整列

    for (int x = 0; x < w; x++)
    {
        vector<pair<int, int>> rec(h); // fi:元何番目か se:値
        vector<int> rec2(h);           // 石の値を一旦保存
        int cnt = 0;
        for (int y = 0; y < h; y++)
        {
            rec[y].first = y;
            if (board[y][x] == -1)
            {
                rec[y].second = -INF;
            }
            else
            {
                rec[y].second = cnt;
                cnt++;
            }
        }
        sort(ALL(rec), [](const auto &a, const auto &b) { return a.second < b.second; });
        for (int i = 0; i < h; i++)
        {
            rec2[i] = board[i][x];
        }
        for (int i = 0; i < h; i++)
        {
            board[i][x] = rec2[rec[i].first];
        }
    }

    return res;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h;
    while (1)
    {
        cin >> h;
        if (h == 0)
        {
            break;
        }
        vector<vector<int>> board(h, vector<int>(w, 0));
        // cout << "dbg:" << h << endl;
        // cout << "dbg :" << endl;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> board[i][j];
            }
        }
        // printBoard(board, h);
        int ans = 0;
        bool flg = true;
        while (flg)
        {
            int tmpp = del(board, h);
            ans += tmpp;
            if (tmpp == 0)
            {
                flg = false;
            }
        }
        // cout << "ans:";
        cout << ans << endl;
    }
    return 0;
}
