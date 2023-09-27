#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;


int main(void) {

    while (true) {
        int M, F, R;
        cin >> M >> F >> R;
        if (M + F + R == -3) { break; }
        char seiseki = 'A';
        int total = M + F;
        if (M == -1 || F == -1 || total < 30) {
            seiseki = 'F';
        }
        else if (total < 50) {
            seiseki = (R < 50) ? 'D' : 'C';
        }
        else if (total < 65) {
            seiseki = 'C';
        }
        else if (total < 80) {
            seiseki = 'B';
        }

        printf("%c\n", seiseki);
    }

    return 0;
}