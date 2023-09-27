#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int change = 1000 - n;
        int count = 0;
        if (change >= 500) {
            change -= 500;
            count++;
        } 
        if (change >= 100) {
            int coin_100 = change / 100;
            change -= 100 * coin_100;
            count += coin_100;
        } 
        if (change >= 50) {
            change -= 50;
            count++;
        }
        if (change >= 10) {
            int coin_10 = change / 10;
            change -= 10 * coin_10;
            count += coin_10;
        }
        if (change >= 5) {
            change -= 5;
            count++;
        }
        count += change;
        cout << count << endl;
    }
    return 0;
}
            