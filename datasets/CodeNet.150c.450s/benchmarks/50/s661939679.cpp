#include <iostream>
using namespace std;

int main() {
    while (true) {
        int input;
        cin >> input;
        if (input == 0) {
            break;
        }
        int change = 1000 - input;
        int coin = 0;
        while (change > 0) {
            if (change >= 500) {
                change -= 500;
            } else if (change >= 100) {
                change -= 100;
            } else if (change >= 50) {
                change -= 50;
            } else if (change >= 10) {
                change -= 10;
            } else if (change >= 5) {
                change -= 5;
            } else {
                change--;
            }
            coin++;
        }
        cout << coin << endl;
    }
}