#include <bits/stdc++.h>
using namespace std;
#define FIN ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef vector<int> vi;

int main() {FIN
    
    int i = 0;
    vi dd(6), ns = {0, 1, 5, 4}, we = {0, 2, 5, 3};
    string c;
    for (i = 0; i < dd.size(); i++)
        cin >> dd[i];
    cin >> c;
    for (i = 0; i < c.size(); i++) {
        if (c[i] == 'N') {
            ns[0] = ns[1], ns[2] = ns[3];
            ns[1] = we[2], ns[3] = we[0];
            we[0] = ns[0], we[2] = ns[2];
        } else if (c[i] == 'S') {
            ns[0] = ns[3], ns[2] = ns[1];
            ns[1] = we[0], ns[3] = we[2];
            we[0] = ns[0], we[2] = ns[2];
        } else if (c[i] == 'W') {
            we[0] = we[1], we[2] = we[3];
            we[1] = ns[2], we[3] = ns[0];
            ns[0] = we[0], ns[2] = we[2];
        } else {
            we[0] = we[3], we[2] = we[1];
            we[1] = ns[0], we[3] = ns[2];
            ns[0] = we[0], ns[2] = we[2];
        }
    }
    cout << dd[ns[0]] << "\n";
    
    return 0;
}
