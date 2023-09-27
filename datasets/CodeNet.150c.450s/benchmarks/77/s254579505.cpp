#include <iostream>
#include <vector>
using namespace std;
void setDiff(const char dir, int* diff) {
    switch (dir) {
    case 'N':
        diff[0] = 0;
        diff[1] = 1;
        break;
    case 'E':
        diff[0] = 1;
        diff[1] = 0;
        break;
    case 'S':
        diff[0] = 0;
        diff[1] = -1;
        break;
    case 'W':
        diff[0] = -1;
        diff[1] = 0;
        break;
    default:
        diff[0] = 21;
        diff[1] = 21;
        break;
    }
}
int main()
{
    int n;
    const int W = 21;
    vector<string> result;
    int board[W][W];
    int diff[2] = {0};
    while (cin >> n && n) {
        fill(board[0], board[W], 0);
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            board[x][y] = 1;
        }
        int m, collection = 0;
        cin >> m;
        int cx = 10, cy = 10;
        for (int i = 0; i < m; ++i) {
            char dir;
            int dist;
            cin >> dir >> dist;
            setDiff(dir, diff);
            for (int j = 0; j < dist; ++j) {
                cx += diff[0];
                cy += diff[1];
                collection += board[cx][cy];
                board[cx][cy] = 0;
            }
        }
        result.push_back(collection == n ? "Yes" : "No");
    }
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << endl;
    }
    
    return 0;
}