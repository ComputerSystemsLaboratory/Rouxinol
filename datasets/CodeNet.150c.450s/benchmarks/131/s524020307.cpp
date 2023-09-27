#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <set>

using namespace std;

#define INF 2147483647
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int a, b;
    char buf[32] = "";

    while (cin >> a >> b, b) {
        map<int, int> mp;
        mp[a] = 0;
        int j;
        for (j = 1; ; j++) {
            sprintf(buf, "%0*d", b, a);
            sort(buf, buf+b);
            int c = atoi(buf);
            reverse(buf, buf+b);
            int d = atoi(buf);
            a = d - c;

            if (!mp.insert(pair<int,int>(a, j)).second) {
                break;
            }
        }

        int r = mp[a];
        printf("%d %d %d\n", r, a, j - r);
    }

    return 0;
}