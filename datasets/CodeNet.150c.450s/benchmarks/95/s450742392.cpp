#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n, n) {
        int count = 0;
        bool lfoot = false;
        bool rfoot = false;
        bool before = false;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            if (s == "lu")
                lfoot = true;
            if (s == "ru")
                rfoot = true;
            if (s == "ld")
                lfoot = false;
            if (s == "rd")
                rfoot = false;
            if (lfoot == rfoot && lfoot != before) {
                count++;
                before = lfoot;
            }
        }
        cout << count << endl;
    }
    return 0;
}