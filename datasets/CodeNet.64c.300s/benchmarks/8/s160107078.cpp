#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
//
// Created by karayuu on 2018-12-24.
//
void call(int n) {
    for (int i = 1; i <= n; i++) {
        int x = i;
        if (x % 3 == 0) {
            cout << " " << i;
            continue;
        } else {
            while (x > 0) {
                if (x % 10 == 3) {
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
        }
    }
    cout << endl;
}

int main() {
    int a;
    cin >> a;

    call(a);
}
