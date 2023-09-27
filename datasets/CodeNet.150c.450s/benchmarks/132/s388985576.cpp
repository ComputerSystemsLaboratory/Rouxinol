#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, p;
    while(cin >> n >> p, n) {
        const int total_p = p;
        int current_player = 0;
        vector<int> v(n);
        int winner = 0;
        while(true) {
            if(p > 0) {
                ++v[current_player];
                --p;
                current_player = (current_player+1)%n;
            } else if(p == 0) {
                if(v[current_player] == total_p) {
                    winner = current_player;
                    break;
                } else {
                    p += v[current_player];
                    v[current_player] = 0;
                    current_player = (current_player+1)%n;
                }
            }
        }
        cout << winner << endl;
    }
}