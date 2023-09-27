#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class dice {
    int dice[6];
    string state;
public:
    void input() {
        for(int i=0; i<6; ++i) cin >> dice[i];
    }
    void output() {
        cout << dice[0];
        for(int i=1; i<6; ++i) cout << ' ' << dice[i];
        cout << endl;
    }
    void move(string state) {
        for(int i=0; i<state.length(); ++i) {
            switch(state[i]) {
                case 'N':
                    swap(dice[0], dice[1]);
                    swap(dice[1], dice[5]);
                    swap(dice[5], dice[4]);
                    break;
                case 'S':
                    swap(dice[0], dice[4]);
                    swap(dice[4], dice[5]);
                    swap(dice[5], dice[1]);
                    break;
                case 'E':
                    swap(dice[0], dice[3]);
                    swap(dice[3], dice[5]);
                    swap(dice[5], dice[2]);
                    break;
                case 'W':
                    swap(dice[0], dice[2]);
                    swap(dice[2], dice[5]);
                    swap(dice[5], dice[3]);
                    break;
                default:
                    break;
            }
        }
    }
    int getTopside() {
        string state;
        cin >> state;
        move(state);
        return dice[0];
    }
};

int main() {
    dice d;
    string state;

    d.input();
    cout << d.getTopside() << endl;

    return 0;
}