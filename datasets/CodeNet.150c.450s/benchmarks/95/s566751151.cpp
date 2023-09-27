#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        if (n == 0) break;

        string prev;
        string current;
        cin >> prev;

        int read_cnt = 2;
        int cnt = 0;

        while (read_cnt <= n) {
            cin >> current;
            if ((prev == "lu" && current == "ru") ||
                (prev == "ru" && current == "lu") ||
                (prev == "ld" && current == "rd") ||
                (prev == "rd" && current == "ld"))
                cnt++;

            prev = current;
            read_cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}