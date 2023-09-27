#include <iostream>

using namespace std;

int main() {
    int n, p;
    int bowl, id, score[51];
    while (cin >> n >> p) {
        if (!n && !p) { break; }
        bowl = p; id = 0;
        fill(score, score+51, 0);
        while (true) {
            if (bowl > 0) {
                bowl--;
                score[id]++;
                if (score[id] == p) {
                    cout << id << endl;
                    break;
                }
            }
            else {
                bowl += score[id];
                score[id] = 0;
            }
            id++;
            id %= n;
        }
    }
    return 0;
}
