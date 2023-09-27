// @author: arch_

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, c, count = 0;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++)
        count += static_cast<int>(c % i == 0);
    cout << count << "\n";
    return 0;
}