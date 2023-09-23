#include <iostream>

using namespace std;

int main(void) {
    int N;
    cin >> N;

    long long p = 1;

    for(int i = 1; i <= N; i++) {
        p *= i;
    }
    cout << p << endl;
    return 0;
}