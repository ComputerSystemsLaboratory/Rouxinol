#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int gem[21][21];
map<char,int> dx = {{'N', 0}, {'E', 1}, {'W', -1}, {'S', 0}};
map<char,int> dy = {{'N', 1}, {'E', 0}, {'W', 0}, {'S', -1}};

int main() {
    int N, M, x, y, l;
    char d;
    while (cin >> N, N) {
        memset(gem, 0, sizeof gem);
        for (int i=0; i<N; ++i) {
            cin >> x >> y;
            gem[y][x] = 1;
        }
        cin >> M;
        int nx = 10, ny = 10;
        int cnt = 0;
        for (int i=0; i<M; ++i) {
            cin >> d >> l;
            for (int j=0; j<l; ++j) {
                nx += dx[d];
                ny += dy[d];
                cnt += gem[ny][nx];
                gem[ny][nx] = 0;
            }
        }
        cout << (cnt == N ? "Yes" : "No") << endl;
    }
    return 0;
}