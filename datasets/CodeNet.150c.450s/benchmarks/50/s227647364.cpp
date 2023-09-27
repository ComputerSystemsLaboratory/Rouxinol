#include <iostream>
using namespace std;

int coins[] = {500, 100, 50, 10, 5, 1};
int main()
{
    int sum;
    while(cin >> sum && sum) {
        int ans = 0;
        sum = 1000 - sum;
        while(sum > 0) {
            for(int i = 0; i < 6; i++) {
                ans += (int)(sum / coins[i]);
                sum %= coins[i];
            }
        }
        cout << ans << endl;
    }
}