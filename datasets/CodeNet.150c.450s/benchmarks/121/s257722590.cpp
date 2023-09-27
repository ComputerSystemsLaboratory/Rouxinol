/* AOJ 0118 Property Distribution */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef pair<int, int> pii;

const int MAX_H = 100;
const int MAX_W = 100;

char garden[MAX_W][MAX_H];
int h, w;
vector<pii> dir;

int count_partitions();
void dfs(int x, int y, char fruit);
void set_dir();

int
main()
{
    set_dir();

    for (;;) {
        cin >> h >> w;
        cin.ignore();

        if (h == 0 && w == 0) break;

        cout << count_partitions() << endl;
    }

    return 0;
}

int
count_partitions()
{
    int n_partitions = 0;
    int i, j;

    for (j = 0; j < h; j++) {
        string s;

        getline(cin, s);
        for (i = 0; i < w; i++)
            garden[i][j] = s[i];
    }

    for (i = 0; i < w; i++) {
        for (j = 0; j < h; j++) {
            switch (garden[i][j]) {
            case '@': // ????????´
            case '#': // ??????
            case '*': // ?????????
                n_partitions++;
                dfs(i, j, garden[i][j]);
            }
        }
    }

    return n_partitions;
}

// ??±???????????¢?´¢
void
dfs(int x, int y, char fruit)
{
    vector<pii>::iterator it;

    // ??¢?´¢???????????¨???????????????????????????
    garden[x][y] = '!';

    for (it = dir.begin(); it != dir.end(); ++it) {
        int x_new = x + it->first, y_new = y + it->second;

        if (0 <= x_new && x_new < w && 0 <= y_new && y_new < h &&
                garden[x_new][y_new] == fruit) {
            // ??°????????§?¨????????¨?????????§????????????????????´????????????????????????
            // ???????????¢?´¢??????
            dfs(x_new, y_new, fruit);
        }
    }
}

void
set_dir()
{
    dir.push_back(pii(1, 0)); // ???
    dir.push_back(pii(0, 1)); // ???
    dir.push_back(pii(-1, 0)); // ???
    dir.push_back(pii(0, -1)); // ???
}