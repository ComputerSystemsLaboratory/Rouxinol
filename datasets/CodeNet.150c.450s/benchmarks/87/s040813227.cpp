#include <iostream>
#include <vector>

using namespace std;

int main() {
    while (true) {
        int h;
        cin >> h;
        if (h == 0)break;

        vector<vector<int>> ban(h, vector<int>(5));
        for (int i = 0; i < h; i++)
            for (int j = 0; j < 5; j++)cin >> ban[i][j];

        int ret = 0;
        while (true) {
            bool found = false;

            for (int i = 0; i < h; i++) {
                bool flag = true;
                for (int j = 0; flag && j < 5; j++) {
                    int x = ban[i][j];
                    for (int k = 5; k >= j + 3; k--) {
                        bool same = true;
                        for (int l = j; l < k; l++)
                            if (ban[i][l] != x || ban[i][l] < 0)same = false;

                        if (same) {
                            found = true;
                            flag = false;
                            ret += x * (k - j);
                            for (int l = j; l < k; l++)ban[i][l] = -1;
                            break;
                        }
                    }
                }
            }

            for (int i = 0; i < 5; i++) {
                vector<int> v;
                for (int j = h - 1; j >= 0; j--) if (ban[j][i] > 0)v.push_back(ban[j][i]);

                for (int j = 0; j < h; j++) {
                    if (j < v.size())ban[h - 1 - j][i] = v[j];
                    else ban[h - 1 - j][i] = -1;
                }
            }
            if (!found)break;
        }

        cout << ret << endl;
    }
    return 0;
}
