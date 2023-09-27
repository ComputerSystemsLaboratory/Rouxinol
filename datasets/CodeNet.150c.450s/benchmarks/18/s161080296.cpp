#include <iostream>

using namespace std;

int debt_hell(int n) {
        int debt = 100000;
        while(n--) {
                debt = debt * 105;
                debt = debt / 100;

                int rem = debt % 1000;
                if (rem != 0) {
                        debt = debt + 1000;
                }
                debt = debt - rem;
        }
        return debt;
}

int main(void) {
        int n;

        cin >> n;

        cout << debt_hell(n) << endl;

        return 0;
}