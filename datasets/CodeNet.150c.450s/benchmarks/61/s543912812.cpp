#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    int N, A, B, C, X, Y;
    while (cin >> N >> A >> B >> C >> X && (N || A || B || C || X)) {
        queue<int> q;
        for (int i=0; i<N; ++i) {
            cin >> Y;
            q.push(Y);
        }
        int time = 0;
        while (time <= 10000) {
            if (q.front() == X) q.pop();
            if (q.empty()) break;
            X = (A * X + B) % C;
            time ++;
        }
        if (10000 < time) {
            cout << "-1" << endl;
        } else {
            cout << time << endl;
        }
    }
    return 0;
}