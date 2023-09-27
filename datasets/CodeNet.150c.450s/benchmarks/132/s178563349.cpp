
// Next Mayor
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1159&lang=jp

#include<iostream>
#include<vector>

using namespace std;

const int NONE = -1;

int N, P;
vector<int> player;
int bowl;
int winner;

bool is_win(int i) {
    for (int nth = 0; nth < N; ++nth) {
        if (nth == i) continue;
        if (player[nth] != 0) return false;
    }
    return true;
}

void pick_up(int i) {
    if (bowl == 0) {
        bowl += player[i];
        player[i] = 0;
        return;
    }
    else if (bowl == 1) {
        bowl--;
        player[i]++;
        if (is_win(i)) winner = i;
        return;
    }
    bowl--;
    player[i]++;
    return;
}

int main() {
    while(cin >> N >> P && N) {
        player.assign(N, 0); 
        bowl = P;
        winner = NONE;
        int i = 0;
        while (true) {
            if (winner != NONE) break;
            pick_up(i);
            i = (i + 1) % N;
        }
        cout << winner << endl;
    }
    return 0;
}