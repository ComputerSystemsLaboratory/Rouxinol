#include <iostream>
using namespace std;

int main ()
{
    bool number[1000001];
    for (int i = 0; i < 1000001; i++) number[i] = true;
    number[0] = number[1] = false;
    for (int i = 2; i < 5001; i++) {
        for (int j = 2; number[i] && i * j <= 1000000; j++) {
            number[i * j] = false;
        }
    }

    int n, m, p;
    while (cin >> n >> m >> p, (n || m || p)) {
        int k = -1;
        while (p) {
            k++;
            if (number[n + m * k]) p--;
        }
        cout << n + m * k << endl;
    }

    return 0;
}