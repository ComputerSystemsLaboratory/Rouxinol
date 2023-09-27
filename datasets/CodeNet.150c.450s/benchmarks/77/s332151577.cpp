#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

string solve(int n) {
    // string ans;
    vector<vector<int>> treasurePosition(n, vector<int>(2));
    int move;

    for (int i = 0; i < n; i++) {
        cin >> treasurePosition[i][0] >> treasurePosition[i][1];
    }
    cin >> move;
    int cast[move];
    vector<string> movedirection(move);
    for (int i = 0; i < move; i++) {
        cin >> movedirection[i];
        cin >> cast[i];
        //cout << cast[i] << " " << endl;
    }
    int xPosition = 10;
    int yPosition = 10;
    int count     = 0;
    for (int i = 0; i < move; i++) {
        for (int k = 0; k < cast[i]; k++) {
            // int cast = (int)movedirection[i][1];
            if (movedirection[i][0] == 'N') {
                yPosition++;
            } else if (movedirection[i][0] == 'E') {
                xPosition++;
            } else if (movedirection[i][0] == 'S') {
                yPosition--;
            } else if (movedirection[i][0] == 'W') {
                xPosition--;
            }
            for (int j = 0; j < n; j++) {
                if (xPosition == treasurePosition[j][0] && yPosition == treasurePosition[j][1]) {
                    count++;
                    treasurePosition[j][0] = -1;
                    treasurePosition[j][1] = -1;
                }
                // cout << xPosition << " " << yPosition << endl;
            }
        }
    }
    if (count == n)
        return "Yes";
    else
        return "No";
}

int main(int argc, char const *argv[]) {
    int n;
    vector<string> ans;
    while (1) {
        cin >> n;
        if (n == 0) {
            break;
        }
        ans.push_back(solve(n));
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}

