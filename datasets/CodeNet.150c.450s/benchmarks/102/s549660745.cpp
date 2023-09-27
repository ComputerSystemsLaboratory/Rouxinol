#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

void bfs(std::vector<std::vector<char> > &map, std::pair<int, int> start) {
    int w = map.size();
    int h = map[0].size();
    int dy[4] = {0, 0, 1, -1};
    int dx[4] = {1, -1, 0, 0};
    std::queue<std::pair<int, int> > que; // coord
    int cost = 0;
    std::pair<int, int> coord = start;
    cost++;
    que.push(std::make_pair(coord.first, coord.second));
    map[coord.first][coord.second] = '#';

    while(! que.empty()) {
        coord = que.front(); 
        que.pop();
        for (int i = 0; i < 4; i++) {
            if (map[coord.first + dy[i]][coord.second + dx[i]] == '.') {
                cost++;
                que.push(std::make_pair(coord.first + dy[i], coord.second + dx[i]));
                map[coord.first + dy[i]][coord.second + dx[i]] = '#';
            }
        }
    }
    std::cout << cost << std::endl;
    return;
}

int main(void) {
    int w;
    int h;
    std::pair<int, int> start;

    while (1) {
        std::cin >> w >> h;
        if (w == 0 && h == 0) {
            break;
        }
        std::vector<std::vector<char> > map(h + 2, std::vector<char>(w + 2, '#'));
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                std::cin >> map[i][j];
                if (map[i][j] == '@') {
                    start.first = i;
                    start.second = j;
                }
            }
        }
        bfs(map, start);
    }
    return 0;
}