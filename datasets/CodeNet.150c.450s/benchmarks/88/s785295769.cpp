#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    int w, h, diag, i, j;
    while (cin >> w >> h, w | h) {
        diag = w * w + h * h;
        i = 0;
        while (1) {
            i++;
            j = sqrt(diag - i * i);
            if (i >= j) {
                diag++;
                i = 0;
                continue;
            } else {
                if ((diag == w * w + h * h && i <= w) || j * j != diag - i * i)
                    continue;
                cout << i << ' ' << j << endl;
                break;
            }
        }
    }
    return 0;
}