#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int n;
    while (cin >> n, n) {
        int r = 0, l = 0;
        int past = 0;
        int count = 0;
        while (n--) {
            string str;
            cin >> str;
            if (str == "lu") l = 1;
            else if (str == "ru") r = 1;
            else if (str == "ld") l = 0;
            else r = 0;
            if (!(r^l) && (r&l) != past) count++, past = r&l;
        }
        cout << count << endl;
    }

    return 0;
}