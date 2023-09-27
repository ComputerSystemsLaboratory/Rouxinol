#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    int n, cnt;
    string f, s;
    while (cin >> n, n) {
        cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2) {
                cin >> s;
                if (f[0] != s[0])
                    cnt++;
            }
            else {
                cin >> f;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}