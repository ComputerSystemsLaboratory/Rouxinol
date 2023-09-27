#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[]) {
    int n, m, p;
    while (cin>>n>>m>>p, n||m||p) {
        int x[100];
        int total = 0;
        for (int i = 0; i < n; ++i) {
            cin>>x[i];
            total += x[i];
        }
        long long result = 0;
        result += 100 * total;
        result = result * (100-p) / 100;
        if (x[m-1] == 0) cout<<0<<endl;
        else cout << result / x[m-1] << endl;
    }
    return 0;
}
