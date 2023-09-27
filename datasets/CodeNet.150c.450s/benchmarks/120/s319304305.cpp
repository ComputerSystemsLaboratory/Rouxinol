#include <iostream>
#include <array>
#include <vector>

#define vi vector<int>

using namespace std;

int height, width;

vector<vi> cook_space;
array<bool, 10> check_reverse;


int count()
{
    int ret = 0;
    // 1?????°????????????

    for (int x = 0; x < width; ++x) {
        int not_reverse = 0;
        for (int y = 0; y < height; ++y) {
            // false && 1 or true && 0 ????????????????????¨??????
            if ( (!check_reverse.at(y) && cook_space.at(y).at(x)) ||
                    (check_reverse.at(y) && !cook_space.at(y).at(x)) ) {
                not_reverse++;
            }
        }
        int reversed = height - not_reverse;
        ret += max(reversed, not_reverse);
    }

    return ret;
}


int ans = 0;
void dfs(int depth) 
{
    // ???????????§???????????????????????????
    if (depth == height) {
        int temp = count();
        ans = max(temp, ans);
        return;
    }

    // depth???????????£??????????????????
    check_reverse.at(depth) = true;
    dfs(depth + 1);

    // depth???????????£????????????????????£??????
    check_reverse.at(depth) = false;
    dfs(depth + 1);
}


void solve()
{
    // ??¨??????
    dfs(0);
    cout << ans << endl;
}

int main()
{
    // input
    while (cin >> height >> width) {

        if (height == 0 && width == 0) break;

        cook_space.resize(height);

        for (auto& it: cook_space) {
            it.resize(width);
        }

        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                cin >> cook_space.at(y).at(x);
            }
        }

        solve();
    }

    return 0;
}