#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::pair;
using std::make_pair;

int dy[4] = {0, 1, 0 ,-1};
int dx[4] = {-1, 0, 1, 0};

int main(void) {
    int n;
    pair<int, int> now; // ????±?, ??????
    int number;
    pair<int, int> coord;
    int y_max;
    int y_min;
    int x_max;
    int x_min;

    while (1) {
        std::cin >> n;
        if (n == 0) {
            break;
        }

        number = 0;
        y_max = -1e09;
        y_min = 1e09;
        x_max = -1e09;
        x_min = 1e09;

        vector<pair<int, int> > map;
        map.push_back(make_pair(0, 0));

        for (int i = 0; i < n - 1; i++) {
            std::cin >> now.first >> now.second; 
            number++;
            coord = map[now.first];
            map.push_back(make_pair(coord.first + dy[now.second], coord.second + dx[now.second]));
        }
        for (int j = 0; j < map.size(); j++) {
            coord = map[j];
            if (y_max < coord.first) {
                y_max = coord.first;
            }
            if (y_min > coord.first) {
                y_min = coord.first;
            }
            if (x_max < coord.second) {
                x_max = coord.second;
            }
            if (x_min > coord.second) {
                x_min = coord.second;
            }
        }

        cout << x_max - x_min + 1 << " " << y_max - y_min + 1 << endl;

    }
    return 0;
}