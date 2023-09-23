#include <iostream>
using namespace std;

int main(void)
{
    int m, f, r;
    
    while (true) {
        cin >> m >> f >> r;
        if ( m == -1 && f == -1 && r == -1) break;
        else if (m == -1 || f == -1) cout << 'F' << endl;
        else if (m + f >= 80) cout << 'A' << endl;
        else if (m + f >= 65 && m + f < 80) cout << 'B' << endl;
        else if (m + f >= 50 && m + f < 65) cout << 'C' << endl;
        else if (m + f >= 30 && m + f < 50) {
            if (r >= 50) cout << 'C' << endl;
            else cout << 'D' << endl;
        } else cout << 'F' << endl;

    }
    return 0;
}