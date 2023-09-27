#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main()
{
    int N, M;
    while (cin >> N, N) {
        map<char, char> mp;
        for (int i = 0; i < N; i++) {
            char a, b;
            cin >> a >> b;
            mp[a] = b;
        }

        cin >> M;
        for (int i = 0; i < M; i++) {
            char c;
            cin >> c;
            if (mp.count(c) > 0) {
                cout << mp[c];
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}