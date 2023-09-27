#include <bits/stdc++.h>
using namespace std;
int main() {
    int Y, X, n;
    int x[10];
    int y[10];
    int ans = 0;
    cin >> Y >> X >> n;
    string a[Y];
    for(int i = 0; i < Y; i++) {
        cin >> a[i];
    }
    int step[Y + 2][X + 2];

    for(int i = 0; i < X + 2; i++) {
        step[0][i] = -2;
    }
    for(int i = 1; i <= Y; i++) {
        step[i][0] = -2;
        for(int j = 1; j <= X; j++) {
            step[i][j] = -1;
            if(a[i - 1][j - 1] == 'S') {
                x[0] = j;
                y[0] = i;
                step[i][j] = 0;
            }
            if(a[i - 1][j - 1] == '.') {
                step[i][j] = -1;
            }
            if(a[i - 1][j - 1] == 'X') {
                step[i][j] = -2;
            }
            if(a[i - 1][j - 1] == '1') {
                x[1] = j;
                y[1] = i;
            }
            if(a[i - 1][j - 1] == '2') {
                x[2] = j;
                y[2] = i;
            }
            if(a[i - 1][j - 1] == '3') {
                x[3] = j;
                y[3] = i;
            }
            if(a[i - 1][j - 1] == '4') {
                x[4] = j;
                y[4] = i;
            }
            if(a[i - 1][j - 1] == '5') {
                x[5] = j;
                y[5] = i;
            }
            if(a[i - 1][j - 1] == '6') {
                x[6] = j;
                y[6] = i;
            }
            if(a[i - 1][j - 1] == '7') {
                x[7] = j;
                y[7] = i;
            }
            if(a[i - 1][j - 1] == '8') {
                x[8] = j;
                y[8] = i;
            }
            if(a[i - 1][j - 1] == '9') {
                x[9] = j;
                y[9] = i;
            }
        }
        step[i][X + 1] = -2;
    }
    for(int i = 0; i < X + 2; i++) {
        step[Y + 1][i] = -2;
    }

    queue<pair<int, int> > q;

    q.push(make_pair(y[0], x[0]));

    for(int i = 0; i < n; i++) {
        while(q.empty() == false) {
            if(q.front().first == y[i + 1] && q.front().second == x[i + 1]) {
                ans += step[y[i + 1]][x[i + 1]];
                for(int j = 1; j <= Y; j++) {
                    for(int k = 1; k <= X; k++) {
                        if(step[j][k] != -2)
                            step[j][k] = -1;
                    }
                }
                step[y[i + 1]][x[i + 1]] = 0;
                while(!q.empty()) {
                    q.pop();
                }
                q.push(make_pair(y[i + 1], x[i + 1]));
                break;
            }
            if(step[q.front().first + 1][q.front().second] == -1) {
                step[q.front().first + 1][q.front().second] =
                    step[q.front().first][q.front().second] + 1;
                q.push(make_pair(q.front().first + 1, q.front().second));
            }
            if(step[q.front().first - 1][q.front().second] == -1) {
                step[q.front().first - 1][q.front().second] =
                    step[q.front().first][q.front().second] + 1;
                q.push(make_pair(q.front().first - 1, q.front().second));
            }
            if(step[q.front().first][q.front().second + 1] == -1) {
                step[q.front().first][q.front().second + 1] =
                    step[q.front().first][q.front().second] + 1;
                q.push(make_pair(q.front().first, q.front().second + 1));
            }
            if(step[q.front().first][q.front().second - 1] == -1) {
                step[q.front().first][q.front().second - 1] =
                    step[q.front().first][q.front().second] + 1;
                q.push(make_pair(q.front().first, q.front().second - 1));
            }
            // for(int j = 1; j <= Y; j++) {
            //     for(int k = 1; k <= X; k++) {
            //         if(step[j][k] > -1)
            //             cout << " ";
            //         cout << step[j][k] << " ";
            //     }
            //     cout << endl;
            // }
            // cout << endl;
            q.pop();
        }
    }
    cout << ans << endl;
    return 0;
}
