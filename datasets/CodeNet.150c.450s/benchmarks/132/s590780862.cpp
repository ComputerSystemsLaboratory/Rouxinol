#include "bits/stdc++.h"
using namespace std;

int main() {
        int i, j;
        while (true) {
                int n, p;
                cin >> n >> p;
                if (n == 0 && p == 0) break;
                int wan = p;
                int turn = 0;
                vector<int> have(n, 0);
                while (true) {
                        if (wan != 0) {
                                wan --;
                                have[turn] ++;
                                if (have[turn] == p) {
                                        cout << turn << endl;
                                        break;
                                }
                        } else {
                                wan = have[turn];
                                have[turn] = 0;
                        }
                        turn ++;
                        if (turn == n) turn = 0;
                }
        }
        return 0;
}