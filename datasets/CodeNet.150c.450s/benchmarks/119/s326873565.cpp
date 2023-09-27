# include <vector>
# include <list>
# include <map>
# include <set>
# include <deque>
# include <stack>
# include <bitset>
# include <algorithm>
# include <functional>
# include <numeric>
# include <utility>
# include <sstream>
# include <iostream>
# include <iomanip>
# include <cstdio>
# include <cmath>
# include <cstdlib>
# include <cctype>
# include <string>
# include <cstring>
# include <ctime>
# include <queue>


# define FOR(i, a, b) for(int i{a}; i < (b); ++i)
# define REP(i, n)    FOR(i, 0, n)

using namespace std;

using ll = long long;

template<typename T>
using Vec = vector<T>;


template<typename T>
using vec = vector<T>;
template <class T>
using vv = vector<vector<T>>;

constexpr int ocean = 0;

void dfs(const vv<int>& map, vv<bool>& reached, int r, int c) {
    reached[r][c] = true;
    if (reached[r][c] == ocean)
        return;
    for (int i = -1; i <= 1; ++i)
        for (int j = -1; j <= 1; ++j)
        {
            if (i == 0 && j == 0)
                continue;
            int y = r + i;
            int x = c + j;
            if (!reached[y][x] && map[y][x] != ocean)
                dfs(map, reached, y, x);
        }
}

int main()
{

    while (true)
    {
        int w, h;
        cin >> w >> h;

        if (w == 0)
            break;

        vv<int> map(h + 2, vec<int>(w + 2, ocean));

        for (int i = 1; i <= h; ++i)
            for (int j = 1; j <= w; ++j)
                cin >> map[i][j];

        vv<bool> hasReached(h + 2, vec<bool>(w + 2, false));

        // init
        

        int count{};

        for (int i = 1; i < map.size(); ++i)
            for (int j = 1; j < map[0].size(); ++j)
            {
                if (!hasReached[i][j] && map[i][j] != ocean)
                {
                    ++count;
                    dfs(map, hasReached, i, j);
                }
            }

        cout << count << endl;
    }

    return 0;
}
