#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int prime (int num) {
    int max = sqrt(num);
    for (int i = 3; i <= max; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int a;
    int d;
    int n;
    int target;
    int kosuu;

    vector<int> v(1000001, 0);
    v[2] = 1;


    for (int i = 3; i < 1000000; i += 2) {
        v[i] = prime(i);
    }

    while (1) {
        cin >> a >> d >> n; 
        if (a == 0 && d == 0 && n == 0) {
            break; 
        }
        target = a - d;
        kosuu = 0;
        while (1) {
            if (kosuu == n) {
                break;
            }
            target += d;
            if (v[target] == 1) {
                kosuu++;
            }
        }
        cout << target << endl;
    }
    return 0;
}