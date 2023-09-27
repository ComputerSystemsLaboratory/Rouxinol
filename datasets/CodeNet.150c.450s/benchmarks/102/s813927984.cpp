#include <iostream>
#include <queue>
#include <utility>
#include <array>

using namespace std;

typedef pair<int, int> pii;

int height, width;
int sx, sy;


void bfs(vector<vector<char>>& field)
{
    int ans = 1;
    array<int, 4> dx = {0, 0, 1, -1};
    array<int, 4> dy = {1, -1, 0, 0};

    queue<pii> p;
    p.push({sx, sy});
    
    while (!p.empty()) {
        pii q = p.front(); p.pop();
        
        //??????
        int cx = q.first;
        int cy = q.second;

        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx.at(i);
            int ny = cy + dy.at(i);

            if (nx >= 0 && nx < width && ny >= 0 && ny < height 
                    && field.at(ny).at(nx) == '.') {

                ans++;
                field.at(ny).at(nx) = '#';
                p.push({nx, ny});
            }
        }
    }

    std::cout << ans << std::endl;
}


int main()
{
    while (cin >> width >> height) {
        if (height == 0 && width == 0) break;

        vector<vector<char>> field(height, vector<char>(width));

        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                cin >> field.at(y).at(x);

                if (field.at(y).at(x) == '@') {
                    sx = x; sy = y;
                }
            }
        }

        bfs(field);
    }

    return 0;
}