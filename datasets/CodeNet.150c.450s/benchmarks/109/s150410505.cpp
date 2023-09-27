#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX_N 100000
int x[MAX_N];
 
int main() {
    int n, a, b, c, d, e, maxn = 0;;
    while (true) {
        for (int i = 0; i < MAX_N; i++) {
            x[i] = 0;
        }
        cin >> n; maxn = 0;
        if (n == 0) { break; }
        for (int i = 0; i < n; i++) {
            scanf("%02d:%02d:%02d", &a, &b, &c);
            d = a * 3600 + b * 60 + c;
            scanf("%02d:%02d:%02d", &a, &b, &c);
            e = a * 3600 + b * 60 + c;
            x[d]++; x[e]--;
        }
        for (int i = 1; i < 99999; i++) {
            x[i] += x[i - 1];
            maxn = max(maxn, x[i]);
        }
        cout << maxn << endl;
    }
}
