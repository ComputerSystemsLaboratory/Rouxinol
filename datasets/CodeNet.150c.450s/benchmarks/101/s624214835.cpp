#include<iostream>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 500000
vector<int>X[MAX_N]; queue<int>Q;
int COLOR[MAX_N], N, M, Q1, A, B;
int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) { cin >> A >> B; X[A].push_back(B); X[B].push_back(A); }
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (COLOR[i] == 0) {
            Q.push(i); cnt++; COLOR[i] = cnt;
            while (!Q.empty()) {
                int a = Q.front(); Q.pop();
                for (int j = 0; j < X[a].size(); j++) {
                    int to = X[a][j];
                    if (COLOR[to] == 0) {
                        COLOR[to] = cnt;
                        Q.push(to);
                    }
                }
            }
        }
    }
    cin >> Q1;
    for (int i = 0; i < Q1; i++) {
        cin >> A >> B;
        if (COLOR[A] == COLOR[B]) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    return 0;
}
