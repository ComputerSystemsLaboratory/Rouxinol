#include<iostream>

using namespace std;

int main() {
    while (true) {
        int n, p, bowl, player;
        int stone[50] = {};
        cin >> n >> p;
        if (n == 0 && p == 0) {
            break;
        }
        bowl = p;
        for (player = 0; stone[player] < p; player = (player + 1) % n) {
            if (bowl > 0) {
                ++stone[player];
                --bowl;
            }
            else {
                bowl = stone[player];
                stone[player] = 0;
            }
        }
        cout << player << endl;
    }
    return 0;
}