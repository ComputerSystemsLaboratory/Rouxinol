#include <iostream>
#include <vector>
#include <stack>

void dfs(std::vector<std::vector<int> > &map, std::stack<std::pair<int, int> > &st, int &number) {
    int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    std::pair<int, int>  coord;
    coord.first = st.top().first;
    coord.second = st.top().second;
    map[coord.first][coord.second] = 0;
    st.pop();
    for (int i = 0; i < 8; i++) {
        if (map[coord.first + dy[i]][coord.second + dx[i]] == 1) {
            st.push(std::make_pair(coord.first + dy[i], coord.second + dx[i]));
            dfs(map, st, number);
        }
    }
    return;
}

int main(void) {
    int w;
    int h;
    int number;
    while (std::cin >> w >> h) {
        if (w == 0 && h == 0) {
            break;
        }
        std::stack<std::pair<int, int> > st;
        number = 0;
        std::vector<std::vector<int> > map(h + 2, std::vector<int>(w + 2, 0));
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                std::cin >> map[i][j];
            }
        }
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                if (map[i][j] == 1) {
                    st.push(std::make_pair(i, j));
                    map[i][j] = 0;
                    dfs(map, st, number);
                    number++;
                }
            }
        }
        std::cout << number << std::endl;
    }
    return 0;
}