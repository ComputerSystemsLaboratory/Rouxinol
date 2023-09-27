#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

int main() {
    char str[1001];

    while (1) {
        scanf("%s", str);
        if (str[0] == '0') break;
        int sum = 0;
        REP(i, strlen(str)) sum += str[i] - '0';

        cout << sum << endl;
    }
}