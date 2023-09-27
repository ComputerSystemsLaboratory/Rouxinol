#include <iostream>
using namespace std;
#define MAX 10005
int main(void) {
    int n, q, G[MAX];
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        G[i] = 0;
    }
    int group = 1;
    while (q--) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            if (G[x] == 0 && G[y] == 0) {
                G[x] = G[y] = group;
                group++;
            } else if (G[x] == 0 || G[y] == 0) {
                if (G[x] == 0)
                    G[x] = G[y];
                else
                    G[y] = G[x];
            } else {
                int g = G[x];
                for (int i = 0; i < n; i++) {
                    if (G[i] == g)
                        G[i] = G[y];
                }
            }
        } else {
            if (G[x] != 0 && G[x] == G[y]) 
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
}
