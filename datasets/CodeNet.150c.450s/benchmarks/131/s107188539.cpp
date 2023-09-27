#include <iostream>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int a, l, cur, i;
    string str;
    bool flg;
    while (cin >> a >> l, a | l) {
        cur = 0;
        int res[20];
        flg = true;
        while (flg) {
            res[cur++] = a;
            str = to_string(a);
            for (i = str.size(); i < l; ++i)
                str += '0';
            sort(str.begin(), str.end());
            a = -stoi(str);
            reverse(str.begin(), str.end());
            a += stoi(str);
            for (i = 0; i < cur; ++i) {
                if (res[i] == a) {
                    flg = false;
                    break;
                }
            }
        }
        cout << i << ' ' << a << ' ' << cur - i << endl;
    }
    return 0;
}