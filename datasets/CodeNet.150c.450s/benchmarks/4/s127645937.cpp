// @author: arch_

#include <bits/stdc++.h>
using namespace std;

vector<char> grades;

int main(void) {
    char tmp;
    int m, f, r;
    while (cin >> m >> f >> r,
           m != -1 | f != -1 | r != -1) {
        if ((m == -1 || f == -1)
            || m + f < 30) tmp = 'F';
        else if (80 <= m + f) tmp = 'A';
        else if (65 <= m + f) tmp = 'B';
        else if (50 <= m + f
                 || (30 <= m + f & 50 <= r)) tmp = 'C';
        else if (30 <= m + f) tmp = 'D';
        grades.emplace_back(tmp);
    }
    for (auto&& g : grades) cout << g << "\n";
    return 0;
}