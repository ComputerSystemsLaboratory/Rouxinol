// @author: arch_

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0
            || to_string(i).find("3") != string::npos)
            cout << " " << i;
    } cout << "\n";
    return 0;
}