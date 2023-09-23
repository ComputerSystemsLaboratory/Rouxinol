#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n) {
        int a = 0, b = 0, c, d;
        for(int i=0; i < n; ++i) {
            cin >> c >> d;
            if (c > d) a += c+d;
            else if (d > c) b += c+d;
            else a += c, b += d;
        }

        printf("%d %d\n", a, b);
    }

    return 0;
}