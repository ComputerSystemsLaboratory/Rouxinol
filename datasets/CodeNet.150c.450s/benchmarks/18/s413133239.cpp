#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int now = 100000;
    for (int i = 0; i < N; i++) {
        now *= 1.05;
        now = (now + 999) / 1000 * 1000;
    }
    cout << now << endl;
    return 0;
}