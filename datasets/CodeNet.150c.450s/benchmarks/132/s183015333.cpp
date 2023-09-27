#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<int> initial(int n, int p) {
    vector<int> status(n + 1);
    status[n] = p;
    return status;
}

void operation(vector<int> &status, int player, int n) {
    if (status[n] == 0) {
        status[n] += status[player];
        status[player] = 0;
    } else {
        status[n] --;
        status[player] ++;
    }
}

int nextPlayer(int player, int n) {
    if (player == n - 1) {
        return 0;
    }
    return player + 1;
}

int check(vector<int> status, int n, int p) {
    for (int i = 0; i < n; i ++) {
        if (status[i] == p) {
            return 1;
        }
    }
    return 0;
}

void game(vector<int> status, int n, int p) {
    int player = -1;
    while (check(status, n, p) != 1) { // ??°????????????????????????
        player = nextPlayer(player, n);// player?????´??°
        operation(status, player, n);
    }
    cout << player << endl;
}

int main(void) {
    int n; // ????£?????????°
    int p; // ?????????????????\???????°?????????°
    cin >> n >> p;
    while (n != 0 && p != 0) {
        vector<int> status = initial(n, p);
        game(status, n, p);
        cin >> n >> p;
    }

    return 0; 
}