#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    u_int n, m;
    cin >> n >> m;
    u_int coins[n+1];

    for (u_int i = 0; i < n + 1; i++)
        coins[i] = 0;
    
    for (u_int i = 0; i < m; i++) {
        u_int c;
        cin >> c;
        if (c <= n) {
            coins[c] = 1;
            for (u_int j = 1; j + c <= n; j++) {
                if (coins[j] && (!coins[c + j] || coins[c] + coins[j] < coins[c + j]))
                    coins[c + j] = coins[c] + coins[j];
            }
        }
    }

    cout << coins[n] << endl;

    return 0;
}