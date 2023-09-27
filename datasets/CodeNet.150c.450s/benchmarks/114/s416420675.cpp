#include <iostream>

using namespace std;

int main() {
    int n, matrix[100][100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    bool visit[100] = {
        true
    };
    int sum = 0;

    while (1) {
        int min = 2001, mini = -1;
        for (int i = 0; i < n; i++) {
            if (visit[i] == true) {
                for (int j = 0; j < n; j++) {
                    if (matrix[i][j] > -1 && matrix[i][j] < min && visit[j] == false) {
                        min = matrix[i][j];
                        mini = j;
                    }
                }
            }
        }
        if (mini == -1) {
            break;
        }
        else {
            sum += min;
            visit[mini] = true;
        }
    }

    cout << sum << endl;

    return 0;
}