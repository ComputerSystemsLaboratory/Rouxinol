#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, p;

    while(cin >> n >> p, n | p) {

        int bowl = p;
        int stone[n];

        fill(stone, stone + n, 0);

        int i = -1;
        do {
            i = (i + 1) % n;
            if(bowl > 0) {
                --bowl;
                ++stone[i];
            } else {
                bowl += stone[i];
                stone[i] = 0;
            }
        } while(stone[i] != p);

        cout << i << endl;

    }

}