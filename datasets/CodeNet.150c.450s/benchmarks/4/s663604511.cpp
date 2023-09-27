#include <iostream>
using namespace std;

int main(void)
{
    while (true) {
        int m, f, r;
        cin >> m >> f >> r;
        if (m + f + r == -3) break;
        else if (m == -1 || f == -1) cout << 'F' << endl;
        else if (m + f >= 80) cout << 'A' << endl;
        else if (m + f >= 65) cout << 'B' << endl;
        else if (m + f >= 50) cout << 'C' << endl;
        else if (m + f >= 30 ) cout << ((r < 50)? 'D' : 'C') << endl;
        else cout << 'F' << endl;;
    }
    return 0;
}
