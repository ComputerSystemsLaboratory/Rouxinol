#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int h;
    while (cin >> h, h) {
        vector<vector<int>> vvi;
        for (int i = 0; i < h; i++) {
            vector<int> vi;
            for (int j = 0; j < 5; j++) {
                int n;
                cin >> n;
                vi.push_back(n);
            }
            vvi.push_back(vi);
        }

        int score = 0;
        while (true) {
            int prescore = score;
            // delete
            for (int j = 0; j < h; j++) {
                for (int i = 0; i < 5; i++) {
                    if (vvi[j][i] == -1)
                        continue;
                    int count = 0;
                    int num = vvi[j][i];
                    for (int k = i; k < 5; k++) {
                        if (vvi[j][k] == num)
                            count++;
                        else
                            break;
                    }
                    if (count < 3)
                        continue;
                    for (int k = i; k < i+count; k++)
                        vvi[j][k] = -1;
                    score += num * count;
                }
            }

            if (prescore == score) {
                cout << score << endl;
                break;
            }

            // fall
            bool loop = true;
            while (loop) {
                loop = false;
                for (int j = 0; j < h; j++) {
                    for (int i = 0; i < 5; i++) {
                        if (vvi[j][i] != -1)
                            continue;
                        for (int k = j; k >= 0; k--) {
                            if (vvi[k][i] == -1)
                                continue;
                            int a = vvi[k][i];
                            vvi[k][i] = -1;
                            vvi[j][i] = a;
                            loop = true;
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}