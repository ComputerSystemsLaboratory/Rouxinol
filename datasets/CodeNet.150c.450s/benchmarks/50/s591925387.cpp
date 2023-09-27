#include <bits/stdc++.h>

using namespace std;

int main()
{
    int M;
    while (cin >> M, M) {        
        int res = 0;
        const int coin[] = {500, 100, 100, 50, 10, 5, 1};
        M = 1000 - M;
        for (int i = 0; i < 7; i++) {
            while (M >= coin[i]) {
                M -= coin[i];
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}