#include<iostream>
#include<vector>
#include<utility>
using namespace std;
enum COLOR{WHITE, GRAY, BLACK};

int main(){
    int n;
    cin >> n;
    vector<vector<int> > G(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G[i][j];
            if (G[i][j] == -1) G[i][j] = 1e8;
        }
    }
    vector<COLOR> COL(n, WHITE);
    COL[0] = GRAY;
    int sum = 0;
    while (1) {
        pair<int, int> min_bridge = make_pair(0, 0);
        for (int i = 0; i < n; i++) {
            if (COL[i] != GRAY) continue;
            bool flag = true;
            for (int j = 0; j < n; j++) {
                if (COL[j] != WHITE) continue;
                flag = false;
                if (G[i][j] < G[min_bridge.first][min_bridge.second]) {
                    min_bridge.first  = i;
                    min_bridge.second = j;
                }
            }
            if (flag) COL[i] = BLACK;
        }
        if (min_bridge.first == 0 && min_bridge.second == 0) break;
        COL[min_bridge.second] = GRAY;
        sum += G[min_bridge.first][min_bridge.second];
    }
cout << sum << endl;
    return 0;
}

