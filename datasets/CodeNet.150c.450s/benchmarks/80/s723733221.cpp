#include<iostream>
using namespace std;

int main() {
    int tmp, i;
    int sum_a = 0, sum_b = 0;

    for (i=0; i<4; i++) {
        cin >> tmp;
        sum_a += tmp;
    }
    for (i=0; i<4; i++) {
        cin >> tmp;
        sum_b += tmp;
    }

    cout << max(sum_a, sum_b) << endl;
    return 0;
}