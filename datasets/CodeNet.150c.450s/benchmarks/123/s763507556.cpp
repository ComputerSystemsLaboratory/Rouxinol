#include <iostream>
#include <math.h>

using namespace std;

// ?´???°
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C&lang=jp
int main(int argc, char const* argv[])
{
    int n, x, t = 0, rt;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x <= 3) {
            t++;
            continue;
        }
        if (x % 2 == 0) continue;

        rt = sqrt(x) + 1;
        int els = 1;
        for (int i = 3; i <= rt; i+=2) {
            if(x % i == 0){
                els = 0;
                break;
            }
        }
        if(els) t++;
    }

    cout << t << endl;

    return 0;
}