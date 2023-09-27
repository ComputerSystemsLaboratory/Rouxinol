#include <iostream>
using namespace std;
int main()
{
    int n, p;
    while (cin >> n >> p && n != 0 && p != 0) {
        int rem = p;
        int players[n], i = 0;
        for (int i = 0; i < n; ++i)
            players[i] = 0;
        while (1) {
            if (--rem < 0) {
                rem = players[i];
                players[i] = 0;
            } else if (++players[i] == p) {
                cout << i << endl;
                break;
            }
            i = ++i != n ? i : 0;
        }
    }
}