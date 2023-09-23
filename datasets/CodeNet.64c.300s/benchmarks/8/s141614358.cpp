
#include <iostream>
using namespace std;

void call(int n);
void check(int i);

int main() {
    int n;
    cin >> n;
    call(n);
}

void call(int n) {
    for (int i = 1; i <= n; ++i) {
        check(i);
    }
    cout << endl;
}

void check(int i) {
    if (i % 3 == 0) {
        cout << " " << i << flush;
    } else if (i % 10 == 3) {
        cout << " " << i << flush;
    } else if ((i / 10) % 10 == 3) {
        cout << " " << i << flush;
    } else if ((i / 100) % 10 == 3) {
        cout << " " << i << flush;
    } else if ((i / 1000) % 10 == 3) {
        cout << " " << i << flush;
    }
}