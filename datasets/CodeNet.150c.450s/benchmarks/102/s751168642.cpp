#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int dm[] = {-1, 0, 1, 0}, dn[] = {0, -1, 0, 1};
int h, w, count;
vector< vector<int> > field, finished;

bool valid(int m, int n) {
    return 0 <= m && m < h && 0 <= n && n < w && field[m][n] == 1;
}

void dfs(int m, int n) {
    finished[m][n] = 1;
    count++;

    for(int i = 0; i < 4; i++) {
        if(valid(m + dm[i], n + dn[i]) && !finished[m + dm[i]][n + dn[i]]) {
            dfs(m + dm[i], n + dn[i]);
        }
    }
}

int main() {
    while(1) {
        cin >> w >> h;
        if (w == 0 && h == 0) {
            break;
        }

        field.resize(h); finished.resize(h);
        int m, n;
        for (int i = 0; i < h; i++) {
            string input;
            cin >> input;

            field[i].resize(w); finished[i].resize(w);

            for (int j = 0; j < w; j++) {
                finished[i][j] = 0;

                if(input[j] == '@') {
                    m = i;
                    n = j;
                }
                if(input[j] == '#') {
                    field[i][j] = 0;
                } else {
                    field[i][j] = 1;
                }
            }
        }

        count = 0;
        dfs(m, n);

        cout << count << endl;
    }

    return 0;
}